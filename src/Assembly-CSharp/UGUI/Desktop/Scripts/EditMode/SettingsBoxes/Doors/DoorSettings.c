
/* Void Initialize(Int32, GameObject) */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Doors::DoorSettings::
     DoorSettings_Initialize(DoorSettings *this,int32_t woID,GameObject *root,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData__Keys);
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (woID == -1) {
    if (*(int *)&(TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData->_1).field_0x1c == 0
       ) {
      FUN_?();
    }
    this_03 = Assets::Scripts::WorldObjectTypes::MVDoor::DoorData::DoorData_DefaultData
                        (DoorType__Enum_Door,(MethodInfo *)0x0);
  }
  else {
    this_02 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if ((this_02 == (MVWorldObjectClientManager *)0x0) ||
       (pMVar1 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                            (this_02,woID,(MethodInfo *)0x0), pMVar1 == (MVWorldObjectClient *)0x0)
       ) goto code_?;
    this_03 = DoorSettings_ReadWorldObjectData(this,(pMVar1->fields)._.data,(MethodInfo *)0x0);
  }
  if (*(int *)&(TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData__Keys->_1).field_0x1c
      == 0) {
    FUN_?(TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData__Keys);
  }
  if ((this_03 != (Dictionary_2_System_Object_System_Object_ *)0x0) &&
     (pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                Object]::Dictionary_2_System_Object_System_Object__get_Item
                          (this_03,(Object *)
                                   TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData__Keys
                                   ->static_fields->DocType,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                          ), pOVar2 != (Object *)0x0)) {
    if ((pOVar2->klass->_0).element_class !=
        (TypeInfo__MVWorldObjectDocumentationType->_0).element_class) {
      FUN_?(pOVar2,TypeInfo__MVWorldObjectDocumentationType);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    this_00 = (this->fields).settingsBase;
    if (this_00 != (SettingsBase *)0x0) {
      value_00 = (String *)0x0;
      SettingsBase::SettingsBase_Initialize
                (this_00,woID,root,*(MVWorldObjectDocumentationType__Enum *)&pOVar2[1].klass,
                 (MethodInfo *)0x0);
      this_01 = (this->fields).nameInputField;
      pSVar4 = TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData__Keys->static_fields->
               Name;
      pSVar5 = (String *)
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                Object]::Dictionary_2_System_Object_System_Object__get_Item
                          (this_03,(Object *)pSVar4,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                          );
      if (this_01 != (SettingsInputField *)0x0) {
        if (pSVar5 != (String *)0x0) {
          if (pSVar5->klass == pSRam0000000182dbbc60) {
            value_00 = pSVar5;
          }
          if (value_00 == (String *)0x0) {
            FUN_?(pSVar5);
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        SettingsInputField::SettingsInputField_Initialize(this_01,pSVar4,value_00,(MethodInfo *)0x0)
        ;
        pSVar6 = (this->fields).toggleBeginOpen;
        pSVar4 = TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData__Keys->static_fields
                 ->BeginOpen;
        pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                  Object]::Dictionary_2_System_Object_System_Object__get_Item
                            (this_03,(Object *)pSVar4,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                            );
        if ((pSVar6 != (SettingsToggle *)0x0) && (pOVar2 != (Object *)0x0)) {
          if ((pOVar2->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40))
          {
            FUN_?(pOVar2);
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          SettingsToggle::SettingsToggle_Initialize
                    (pSVar6,pSVar4,*(bool *)&pOVar2[1].klass,(MethodInfo *)0x0);
          pSVar6 = (this->fields).togglePlayersCanOpen;
          pSVar4 = TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData__Keys->
                   static_fields->PlayersCanOpen;
          pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                    Object]::Dictionary_2_System_Object_System_Object__get_Item
                              (this_03,(Object *)pSVar4,
                               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                              );
          if ((pSVar6 != (SettingsToggle *)0x0) && (pOVar2 != (Object *)0x0)) {
            if ((pOVar2->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)
               ) {
              FUN_?(pOVar2);
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            SettingsToggle::SettingsToggle_Initialize
                      (pSVar6,pSVar4,*(bool *)&pOVar2[1].klass,(MethodInfo *)0x0);
            pSVar6 = (this->fields).toggleReverseOpenDirection;
            pSVar4 = TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData__Keys->
                     static_fields->ReverseOpenDirection;
            pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System
                      ::Object]::Dictionary_2_System_Object_System_Object__get_Item
                                (this_03,(Object *)pSVar4,
                                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                );
            if ((pSVar6 != (SettingsToggle *)0x0) && (pOVar2 != (Object *)0x0)) {
              if ((pOVar2->klass->_0).element_class !=
                  *(Il2CppClass **)(lRam_? + 0x40)) {
                FUN_?(pOVar2);
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              value = *(bool *)&pOVar2[1].klass;
              if (cRam_? == '\0') {
                FUN_?(&MethodInfo__SettingsToggle__ValueChanged_bool_);
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
              bVar7 = iRam_? != 0;
              (pSVar6->fields).key = pSVar4;
              if (bVar7) {
                uVar8 = (uint)((ulonglong)&(pSVar6->fields).key >> 0xc);
                puVar9 = (ulonglong *)((ulonglong)((uVar8 & 0x1fffff) >> 6) * 8 + 0xADDR);
                do {
                  uVar10 = *puVar9;
                  LOCK();
                  uVar11 = *puVar9;
                  if (uVar10 == uVar11) {
                    *puVar9 = uVar10 | 1L << (uVar8 & 0x3f);
                  }
                  UNLOCK();
                } while (uVar10 != uVar11);
              }
              pTVar12 = (pSVar6->fields).toggle;
              if (pTVar12 != (Toggle *)0x0) {
                UnityEngine.UI.dll::UnityEngine::UI::Toggle::Toggle_Set
                          (pTVar12,value,1,(MethodInfo *)0x0);
                pTVar12 = (pSVar6->fields).toggle;
                if (pTVar12 != (Toggle *)0x0) {
                  pTVar13 = (pTVar12->fields).onValueChanged;
                  uVar14 = FUN_?(TypeInfo__UnityEngine__Events__UnityAction<bool>);
                  FUN_?(uVar14,pSVar6,MethodInfo__SettingsToggle__ValueChanged_bool_);
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
                    pcVar3 = (code *)swi(3);
                    (*pcVar3)();
                    return;
                  }
                }
              }
              FUN_?();
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
          }
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OnSettingChanged(String, Object) */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Doors::DoorSettings::
     DoorSettings_OnSettingChanged(DoorSettings *this,String *key,Object *value,MethodInfo *method)

{
  pSVar1 = (this->fields).settingsBase;
  if (pSVar1 == (SettingsBase *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
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
  if ((((pSVar1->fields).woID != -1) && (key != (String *)0x0)) &&
     ((key->fields)._stringLength != 0)) {
    this_01 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (this_01 != (MVWorldObjectClientManager *)0x0) {
      wo = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                     (this_01,(pSVar1->fields).woID,(MethodInfo *)0x0);
      if (wo == (MVWorldObjectClient *)0x0) {
        return;
      }
      if (*(int *)&(TypeInfo__WorldObjectDataValidator->_1).field_0x1c == 0) {
        FUN_?();
      }
      uVar3 = 0;
      WorldObjectDataValidator::WorldObjectDataValidator_Validate(wo,key,value,(MethodInfo *)0x0);
      this_00 = (pSVar1->fields).result;
      if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
        uVar3 = CONCAT71((int7)((ulonglong)uVar3 >> 8),1);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__TryInsert
                  (this_00,(Object *)key,value,(InsertionBehavior__Enum)uVar3,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                   ->klass->rgctx_data[0x22].method);
        this_02 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
                   *)FUN_?(
                                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                                  );
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
        UIElements::UIR::UIRenderDevice+DisableForceGammaMaterial]::
        Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
                  (this_02,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                  );
        if (this_02 !=
            (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
             *)0x0) {
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__TryInsert
                    ((Dictionary_2_System_Object_System_Object_ *)this_02,(Object *)key,value,
                     (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar3 >> 8),2),
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                     ->klass->rgctx_data[0x22].method);
          (*(wo->klass->vtable).PartialUpdateWOData.methodPtr)
                    (wo,this_02,(wo->klass->vtable).PartialUpdateWOData.method);
          return;
        }
      }
    }
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  return;
}


/* Dictionary`2[System.Object,System.Object]
   ReadWorldObjectData(Dictionary`2[System.Object,System.Object]) */

Dictionary_2_System_Object_System_Object_ *
Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Doors::DoorSettings::
DoorSettings_ReadWorldObjectData
          (DoorSettings *this,Dictionary_2_System_Object_System_Object_ *woData,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryGetValue_System__Object__System__Object__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorType);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData__Keys);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Door_has_no_set_type);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  apOStackX_10[0] = (Object *)0x0;
  pOStack_1 = (Object *)0x0;
  pOStack_2 = (Object *)0x0;
  pOStack_3 = (Object *)0x0;
  pOStack_4 = (Object *)0x0;
  pOStack_5 = (Object *)0x0;
  pOStack_6 = (Object *)0x0;
  apOStack_7[0] = (Object *)0x0;
  if (*(int *)&(TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData__Keys->_1).field_0x1c
      == 0) {
    FUN_?(TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData__Keys);
  }
  if (woData != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    bVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__TryGetValue
                      (woData,(Object *)
                              TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData__Keys->
                              static_fields->DoorType,apOStackX_10,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryGetValue_System__Object__System__Object__
                      );
    pOVar9 = apOStackX_10[0];
    if (bVar8 == 0) {
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                ((Object *)StringLiteral_Door_has_no_set_type,(MethodInfo *)0x0);
      pDVar10 = TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorType;
      uStackX_20 = 0;
      iVar11._0_2_ = (TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorType->_0).byval_arg.
                    attrs;
      iVar11._2_1_ = (TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorType->_0).byval_arg.
                    type;
      iVar11._3_1_ = (TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorType->_0).byval_arg.
                    field_0xb;
      if (iVar11 < 0) {
        if (((TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorType->_0).generic_class ==
             (Il2CppGenericClass *)0x0) ||
           (pOVar9 = (Object *)0x0,
           ((TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorType->_1).field_0x6d & 8) == 0
           )) {
          pOVar9 = (Object *)
                   FUN_?(TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorType);
          FUN_?(pOVar9 + 1,&uStackX_20,(longlong)(int)(pDVar10->_1).instance_size + -0x10);
          if (iRam_? != 0) {
            uVar12 = (uint)((ulonglong)(pOVar9 + 1) >> 0xc);
            puVar13 = (ulonglong *)((ulonglong)((uVar12 & 0x1fffff) >> 6) * 8 + 0xADDR);
            do {
              uVar14 = *puVar13;
              LOCK();
              uVar15 = *puVar13;
              if (uVar14 == uVar15) {
                *puVar13 = uVar14 | 1L << (uVar12 & 0x3f);
              }
              UNLOCK();
            } while (uVar14 != uVar15);
          }
        }
      }
      else {
        pOVar9 = (Object *)((ulonglong)uStackX_24 << 0x20);
      }
    }
    apOStackX_10[0] = pOVar9;
    pOVar9 = apOStackX_10[0];
    if (*(int *)&(TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData->_1).field_0x1c == 0
       ) {
      FUN_?();
    }
    if (pOVar9 != (Object *)0x0) {
      if ((pOVar9->klass->_0).element_class !=
          (TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorType->_0).element_class) {
        FUN_?(pOVar9,TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorType);
        pcVar16 = (code *)swi(3);
        pDVar17 = (Dictionary_2_System_Object_System_Object_ *)(*pcVar16)();
        return pDVar17;
      }
      pDVar17 = Assets::Scripts::WorldObjectTypes::MVDoor::DoorData::DoorData_DefaultData
                         (*(DoorType__Enum *)&pOVar9[1].klass,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData__Keys->_1).
                   field_0x1c == 0) {
        FUN_?(TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData__Keys);
      }
      pMVar18 = 
      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryGetValue_System__Object__System__Object__
      ;
      bVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
              Object]::Dictionary_2_System_Object_System_Object__TryGetValue
                        (woData,(Object *)
                                TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData__Keys
                                ->static_fields->Name,&pOStack_1,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryGetValue_System__Object__System__Object__
                        );
      if (bVar8 != 0) {
        if (*(int *)&(TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData__Keys->_1).
                     field_0x1c == 0) {
          FUN_?(TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData__Keys);
        }
        if (pDVar17 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__TryInsert
                  (pDVar17,(Object *)
                          TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData__Keys->
                          static_fields->Name,pOStack_1,
                   (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)pMVar18 >> 8),1),
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                   ->klass->rgctx_data[0x22].method);
      }
      if (*(int *)&(TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData__Keys->_1).
                   field_0x1c == 0) {
        FUN_?(TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData__Keys);
      }
      pMVar18 = 
      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryGetValue_System__Object__System__Object__
      ;
      bVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
              Object]::Dictionary_2_System_Object_System_Object__TryGetValue
                        (woData,(Object *)
                                TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData__Keys
                                ->static_fields->BeginOpen,&pOStack_2,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryGetValue_System__Object__System__Object__
                        );
      if (bVar8 != 0) {
        if (*(int *)&(TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData__Keys->_1).
                     field_0x1c == 0) {
          FUN_?(TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData__Keys);
        }
        if (pDVar17 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__TryInsert
                  (pDVar17,(Object *)
                          TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData__Keys->
                          static_fields->BeginOpen,pOStack_2,
                   (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)pMVar18 >> 8),1),
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                   ->klass->rgctx_data[0x22].method);
      }
      if (*(int *)&(TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData__Keys->_1).
                   field_0x1c == 0) {
        FUN_?(TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData__Keys);
      }
      pMVar18 = 
      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryGetValue_System__Object__System__Object__
      ;
      bVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
              Object]::Dictionary_2_System_Object_System_Object__TryGetValue
                        (woData,(Object *)
                                TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData__Keys
                                ->static_fields->PlayersCanOpen,&pOStack_3,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryGetValue_System__Object__System__Object__
                        );
      if (bVar8 != 0) {
        if (*(int *)&(TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData__Keys->_1).
                     field_0x1c == 0) {
          FUN_?(TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData__Keys);
        }
        if (pDVar17 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__TryInsert
                  (pDVar17,(Object *)
                          TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData__Keys->
                          static_fields->PlayersCanOpen,pOStack_3,
                   (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)pMVar18 >> 8),1),
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                   ->klass->rgctx_data[0x22].method);
      }
      if (*(int *)&(TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData__Keys->_1).
                   field_0x1c == 0) {
        FUN_?(TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData__Keys);
      }
      pMVar18 = 
      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryGetValue_System__Object__System__Object__
      ;
      bVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
              Object]::Dictionary_2_System_Object_System_Object__TryGetValue
                        (woData,(Object *)
                                TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData__Keys
                                ->static_fields->ReverseOpenDirection,&pOStack_4,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryGetValue_System__Object__System__Object__
                        );
      if (bVar8 != 0) {
        if (*(int *)&(TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData__Keys->_1).
                     field_0x1c == 0) {
          FUN_?(TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData__Keys);
        }
        if (pDVar17 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__TryInsert
                  (pDVar17,(Object *)
                          TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData__Keys->
                          static_fields->ReverseOpenDirection,pOStack_4,
                   (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)pMVar18 >> 8),1),
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                   ->klass->rgctx_data[0x22].method);
      }
      if (*(int *)&(TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData__Keys->_1).
                   field_0x1c == 0) {
        FUN_?(TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData__Keys);
      }
      pMVar18 = 
      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryGetValue_System__Object__System__Object__
      ;
      bVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
              Object]::Dictionary_2_System_Object_System_Object__TryGetValue
                        (woData,(Object *)
                                TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData__Keys
                                ->static_fields->OpenValue,&pOStack_5,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryGetValue_System__Object__System__Object__
                        );
      if (bVar8 != 0) {
        if (*(int *)&(TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData__Keys->_1).
                     field_0x1c == 0) {
          FUN_?(TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData__Keys);
        }
        if (pDVar17 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__TryInsert
                  (pDVar17,(Object *)
                          TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData__Keys->
                          static_fields->OpenValue,pOStack_5,
                   (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)pMVar18 >> 8),1),
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                   ->klass->rgctx_data[0x22].method);
      }
      if (*(int *)&(TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData__Keys->_1).
                   field_0x1c == 0) {
        FUN_?(TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData__Keys);
      }
      pMVar18 = 
      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryGetValue_System__Object__System__Object__
      ;
      bVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
              Object]::Dictionary_2_System_Object_System_Object__TryGetValue
                        (woData,(Object *)
                                TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData__Keys
                                ->static_fields->CloseValue,&pOStack_6,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryGetValue_System__Object__System__Object__
                        );
      if (bVar8 != 0) {
        if (*(int *)&(TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData__Keys->_1).
                     field_0x1c == 0) {
          FUN_?(TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData__Keys);
        }
        if (pDVar17 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__TryInsert
                  (pDVar17,(Object *)
                          TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData__Keys->
                          static_fields->CloseValue,pOStack_6,
                   (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)pMVar18 >> 8),1),
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                   ->klass->rgctx_data[0x22].method);
      }
      if (*(int *)&(TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData__Keys->_1).
                   field_0x1c == 0) {
        FUN_?(TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData__Keys);
      }
      pMVar18 = 
      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryGetValue_System__Object__System__Object__
      ;
      bVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
              Object]::Dictionary_2_System_Object_System_Object__TryGetValue
                        (woData,(Object *)
                                TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData__Keys
                                ->static_fields->ToggleTime,apOStack_7,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryGetValue_System__Object__System__Object__
                        );
      if (bVar8 != 0) {
        if (*(int *)&(TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData__Keys->_1).
                     field_0x1c == 0) {
          FUN_?(TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData__Keys);
        }
        if (pDVar17 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__TryInsert
                  (pDVar17,(Object *)
                          TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData__Keys->
                          static_fields->ToggleTime,apOStack_7[0],
                   (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)pMVar18 >> 8),1),
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                   ->klass->rgctx_data[0x22].method);
      }
      return pDVar17;
    }
  }
code_?:
  FUN_?();
  pcVar16 = (code *)swi(3);
  pDVar17 = (Dictionary_2_System_Object_System_Object_ *)(*pcVar16)();
  return pDVar17;
}

