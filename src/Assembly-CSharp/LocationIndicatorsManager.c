
/* Void Awake() */

void Assembly-CSharp.dll::LocationIndicatorsManager::LocationIndicatorsManager_Awake
               (LocationIndicatorsManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__LocationIndicatorsManager);
    cRam_? = '\x01';
  }
  x = TypeInfo__LocationIndicatorsManager->static_fields->_Instance_k__BackingField;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)x,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    if (cRam_? == '\0') {
      this = (LocationIndicatorsManager *)&TypeInfo__LocationIndicatorsManager;
      func_?();
      cRam_? = '\x01';
    }
    TypeInfo__LocationIndicatorsManager->static_fields->_Instance_k__BackingField = this;
    func_?();
    return;
  }
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  if (pcRam_? == (code *)0x0) {
    pcRam_? = (code *)func_?();
  }
  (*pcRam_?)();
  return;
}


/* Boolean CreateIndicatorIfNotDefined(MVPlayer) */

bool Assembly-CSharp.dll::LocationIndicatorsManager::
     LocationIndicatorsManager_CreateIndicatorIfNotDefined
               (LocationIndicatorsManager *this,MVPlayer *player,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_LocationIndicator>__Add_int__LocationIndicator_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_LocationIndicator>__ContainsKey_int_
                   );
    func_?(&
                    LocationIndicator_MethodInfo__UnityEngine__Object__Instantiate<LocationIndicator>_LocationIndicator__UnityEngine__Transform_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if ((player != (MVPlayer *)0x0) &&
     (pDVar1 = (this->fields).indicators,
     pDVar1 != (Dictionary_2_System_Int32_LocationIndicator_ *)0x0)) {
    key = (player->fields)._ProfileID_k__BackingField;
    bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Single]::
            Dictionary_2_System_Int32_System_Single__ContainsKey
                      ((Dictionary_2_System_Int32_System_Single_ *)pDVar1,key,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_LocationIndicator>__ContainsKey_int_
                      );
    if (bVar2 != 0) {
      return 0;
    }
    pMVar3 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
    if (pMVar3 != (MVLocalPlayer *)0x0) {
      if (key == (pMVar3->fields)._._ProfileID_k__BackingField) {
        return 0;
      }
      original = (this->fields).indicatorPrefab;
      parent = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                         ((Component *)this,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      value = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_5
                        ((Object *)original,parent,
                         LocationIndicator_MethodInfo__UnityEngine__Object__Instantiate<LocationIndicator>_LocationIndicator__UnityEngine__Transform_
                        );
      if (value != (Object *)0x0) {
        value[5].klass = (Object__Class *)player;
        func_?();
        if (((player->fields)._UserProfileData_k__BackingField != (UserProfileData *)0x0) &&
           (value[3].klass != (Object__Class *)0x0)) {
          (*(code *)((value[3].klass)->_0).image[0x12].name)();
          pDVar1 = (this->fields).indicators;
          if (pDVar1 != (Dictionary_2_System_Int32_LocationIndicator_ *)0x0) {
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
            Dictionary_2_System_Int32_System_Object__Add
                      ((Dictionary_2_System_Int32_System_Object_ *)pDVar1,(int32_t)original,value,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_LocationIndicator>__Add_int__LocationIndicator_
                      );
            return 1;
          }
        }
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  bVar2 = (*pcVar4)();
  return bVar2;
}


/* Void CreateOrDestroyIndicators() */

void Assembly-CSharp.dll::LocationIndicatorsManager::
     LocationIndicatorsManager_CreateOrDestroyIndicators
               (LocationIndicatorsManager *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_LocationIndicator>__Remove_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_LocationIndicator>__get_Item_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_LocationIndicator>__get_Keys__
                   );
    func_?(&MethodInfo__System__Collections__Generic__List_1_T___Enumerator<int>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<int>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<int>__get_Current__
                   );
    func_?(&TypeInfo__System__IDisposable);
    func_?(&TypeInfo__System__Collections__Generic__IEnumerable<MVPlayer>);
    func_?(&TypeInfo__System__Collections__Generic__IEnumerator<MVPlayer>);
    func_?(&TypeInfo__System__Collections__IEnumerator);
    func_?(&MethodInfo__System__Collections__Generic__List<int>__GetEnumerator__);
    func_?(&MethodInfo__System__Collections__Generic__List<int>__Remove_int_);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<int>__List_System__Collections__Generic__IEnumerable<int>_
                   );
    func_?(&TypeInfo__System__Collections__Generic__List<int>);
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  pMVar4 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar4 != (MVNetworkGame *)0x0) &&
     (this_00 = (pMVar4->fields).playerContainer, this_00 != (MVPlayerContainer *)0x0)) {
    pDVar5 = MVPlayerContainer::MVPlayerContainer_get_ActivePlayers(this_00,(MethodInfo *)0x0);
    this_01 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
               *)(this->fields).indicators;
    if (this_01 !=
        (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
         *)0x0) {
      collection = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements
                   ::StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
                   Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__get_Keys
                             (this_01,
                              MethodInfo__System__Collections__Generic__Dictionary<int,_LocationIndicator>__get_Keys__
                             );
      method_00 = (MethodInfo *)func_?();
      mscorlib.dll::System::Collections::Generic::List`1[System::Int32]::
      List_1_System_Int32___ctor_1
                ((List_1_System_Int32_ *)method_00,(IEnumerable_1_System_Int32_ *)collection,
                 MethodInfo__System__Collections__Generic__List<int>__List_System__Collections__Generic__IEnumerable<int>_
                );
      bVar6 = false;
      if (pDVar5 != (Dictionary_2_TKey_TValue_ValueCollection_System_Int32_MVPlayer_ *)0x0) {
        pDVar7 = pDVar5->klass;
        uVar8 = 0;
        uVar9._0_1_ = (pDVar7->_1).rank;
        uVar9._1_1_ = (pDVar7->_1).minimumAlignment;
        if (uVar9 != 0) {
          do {
            if (pDVar7->interfaceOffsets[uVar8].interfaceType ==
                (Il2CppClass *)TypeInfo__System__Collections__Generic__IEnumerable<MVPlayer>) {
              ppMVar10 = &(&(pDVar7->vtable).Equals)[pDVar7->interfaceOffsets[uVar8].offset].method
              ;
              goto code_?;
            }
            uVar8 = uVar8 + 1;
          } while (uVar8 < uVar9);
        }
        ppMVar10 = (MethodInfo **)func_?();
code_?:
        piVar11 = (int *)(*(code *)*ppMVar10)();
        uStack_1 = 1;
        while (piVar11 != (int *)0x0) {
          uVar8 = 0;
          uVar9 = *(ushort *)(*piVar11 + 0xb6);
          if (uVar9 != 0) {
            do {
              if (*(IEnumerator__Class **)(*(int *)(*piVar11 + 0x58) + (uint)uVar8 * 8) ==
                  TypeInfo__System__Collections__IEnumerator) {
                puVar12 = (undefined4 *)
                          (*piVar11 +
                          (*(int *)(*(int *)(*piVar11 + 0x58) + 4 + (uint)uVar8 * 8) + 0x18) * 8);
                goto code_?;
              }
              uVar8 = uVar8 + 1;
            } while (uVar8 < uVar9);
          }
          puVar12 = (undefined4 *)func_?();
code_?:
          cVar13 = (*(code *)*puVar12)();
          if (cVar13 == '\0') {
            uStack_1 = 0xffffffff;
            if (piVar11 != (int *)0x0) {
              func_?();
            }
            uStack_1 = 0xffffffff;
            if (method_00 != (MethodInfo *)0x0) {
              pLVar14 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                        RegularExpressions::RegexCharClass+SingleRange]::
                        List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                                  ((List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                                    *)&stack0xffffffb4,
                                   (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                                    *)method_00,
                                   MethodInfo__System__Collections__Generic__List<int>__GetEnumerator__
                                  );
              key_00 = pLVar14->_current;
              uStack_1 = 4;
              goto code_?;
            }
            break;
          }
          if (piVar11 == (int *)0x0) break;
          uVar8 = 0;
          uVar9 = *(ushort *)(*piVar11 + 0xb6);
          if (uVar9 != 0) {
            do {
              if (*(IEnumerator_1_MVPlayer___Class **)(*(int *)(*piVar11 + 0x58) + (uint)uVar8 * 8)
                  == TypeInfo__System__Collections__Generic__IEnumerator<MVPlayer>) {
                puVar12 = (undefined4 *)
                          (*piVar11 +
                          (*(int *)(*(int *)(*piVar11 + 0x58) + 4 + (uint)uVar8 * 8) + 0x18) * 8);
                goto code_?;
              }
              uVar8 = uVar8 + 1;
            } while (uVar8 < uVar9);
          }
          puVar12 = (undefined4 *)func_?();
code_?:
          pOVar15 = (Object__Class *)(*(code *)*puVar12)();
          if (cRam_? == '\0') {
            func_?();
            func_?();
            func_?();
            func_?();
            cRam_? = '\x01';
          }
          if (pOVar15 == (Object__Class *)0x0) break;
          key = (pOVar15->_0).parent;
          pDVar16 = (this->fields).indicators;
          if (pDVar16 == (Dictionary_2_System_Int32_LocationIndicator_ *)0x0) break;
          bVar17 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                  Single]::Dictionary_2_System_Int32_System_Single__ContainsKey
                            ((Dictionary_2_System_Int32_System_Single_ *)pDVar16,(int32_t)key,
                             MethodInfo__System__Collections__Generic__Dictionary<int,_LocationIndicator>__ContainsKey_int_
                            );
          if (bVar17 == 0) {
            pMVar18 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
            if (pMVar18 == (MVLocalPlayer *)0x0) break;
            if (key == (Il2CppClass *)(pMVar18->fields)._._ProfileID_k__BackingField)
            goto code_?;
            original = (this->fields).indicatorPrefab;
            parent = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                               ((Component *)this,(MethodInfo *)0x0);
            if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            value = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_5
                              ((Object *)original,parent,
                               LocationIndicator_MethodInfo__UnityEngine__Object__Instantiate<LocationIndicator>_LocationIndicator__UnityEngine__Transform_
                              );
            if (value == (Object *)0x0) break;
            value[5].klass = pOVar15;
            func_?();
            if (((pOVar15->_0).klass == (Il2CppClass *)0x0) ||
               (value[3].klass == (Object__Class *)0x0)) break;
            (*(code *)((value[3].klass)->_0).image[0x12].name)();
            pDVar16 = (this->fields).indicators;
            if (pDVar16 == (Dictionary_2_System_Int32_LocationIndicator_ *)0x0) break;
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
            Dictionary_2_System_Int32_System_Object__Add
                      ((Dictionary_2_System_Int32_System_Object_ *)pDVar16,(int32_t)key,value,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_LocationIndicator>__Add_int__LocationIndicator_
                      );
            bVar6 = true;
          }
          else {
code_?:
            if (method_00 == (MethodInfo *)0x0) break;
            mscorlib.dll::System::Collections::Generic::List`1[System::Int32]::
            List_1_System_Int32__Remove
                      ((List_1_System_Int32_ *)method_00,(int32_t)(pOVar15->_0).parent,
                       MethodInfo__System__Collections__Generic__List<int>__Remove_int_);
          }
        }
      }
    }
  }
code_?:
  func_?();
  func_?();
  pcVar19 = (code *)swi(3);
  (*pcVar19)();
  return;
code_?:
  bVar17 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Text::
          RegularExpressions::RegexCharClass+SingleRange]::
          List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange__MoveNext
                    ((List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                      *)&stack0xffffffa4,
                     MethodInfo__System__Collections__Generic__List_1_T___Enumerator<int>__MoveNext__
                    );
  if (bVar17 == 0) goto code_?;
  pDVar16 = (this->fields).indicators;
  if ((pDVar16 == (Dictionary_2_System_Int32_LocationIndicator_ *)0x0) ||
     (this_02 = (Component *)
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                Object]::Dictionary_2_System_Int32_System_Object__get_Item
                          ((Dictionary_2_System_Int32_System_Object_ *)pDVar16,(int32_t)key_00,
                           MethodInfo__System__Collections__Generic__Dictionary<int,_LocationIndicator>__get_Item_int_
                          ), this_02 == (Component *)0x0)) goto code_?;
  method_00 = (MethodInfo *)&UNK_?;
  obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                  (this_02,(MethodInfo *)0x0);
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
            ((Object_1 *)obj,(MethodInfo *)0x0);
  pDVar16 = (this->fields).indicators;
  if (pDVar16 == (Dictionary_2_System_Int32_LocationIndicator_ *)0x0) goto code_?;
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
  Dictionary_2_System_Int32_System_Object__Remove
            ((Dictionary_2_System_Int32_System_Object_ *)pDVar16,(int32_t)key_00,
             MethodInfo__System__Collections__Generic__Dictionary<int,_LocationIndicator>__Remove_int_
            );
  goto code_?;
code_?:
  uStack_1 = 0xffffffff;
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)&stack0xffffffa4,
             (ExceptionArgument__Enum)
             MethodInfo__System__Collections__Generic__List_1_T___Enumerator<int>__Dispose__,
             method_00);
  uStack_1 = 0xffffffff;
  if (bVar6) {
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    pPVar20 = TypeInfo__PlanetOwnershipsManager->static_fields->_Instance_k__BackingField;
    if (pPVar20 == (PlanetOwnershipsManager *)0x0) goto code_?;
    if ((pPVar20->fields)._RecievedPlanetOwnershipData_k__BackingField != 0) {
      LocationIndicatorsManager_SetIndicatorsOwnership(this,(MethodInfo *)0x0);
    }
  }
  *unaff_FS_OFFSET = uStack_3;
  return;
}


/* Void JSON_Unstripper() */

void Assembly-CSharp.dll::LocationIndicatorsManager::LocationIndicatorsManager_JSON_Unstripper
               (LocationIndicatorsManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MV__WorldObject__OwnershipData__PlanetOwnershipsData);
    func_?(&TypeInfo__MV__WorldObject__OwnershipData__PlanetOwnershipsEntry);
    cRam_? = '\x01';
  }
  this_00 = (PlanetOwnershipsData *)
            func_?(TypeInfo__MV__WorldObject__OwnershipData__PlanetOwnershipsData);
  MVWorldObject.dll::MV::WorldObject::OwnershipData::PlanetOwnershipsData::
  PlanetOwnershipsData__ctor(this_00,(MethodInfo *)0x0);
  this_01 = (UxmlObjectListAttributeDescription_1_System_Object_ *)
            func_?(TypeInfo__MV__WorldObject__OwnershipData__PlanetOwnershipsEntry);
  UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
  UxmlObjectListAttributeDescription`1[System::Object]::
  UxmlObjectListAttributeDescription_1_System_Object___ctor(this_01,(MethodInfo *)0x0);
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::LocationIndicatorsManager::LocationIndicatorsManager_OnDestroy
               (LocationIndicatorsManager *this,MethodInfo *method)

{
  this_02 = (DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
             *)*unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &stack0xfffffff0;
  pMVar1 = (MethodInfo *)&stack0xffffffbc;
  method_00 = (MethodInfo *)&stack0xffffffbc;
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__System__Action<System::Collections::Generic::Dictionary<int,_MV::WorldObject::OwnershipData::PlanetOwnershipsEntry>_>
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_LocationIndicator>__get_Item_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_LocationIndicator>__get_Keys__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<int,_LocationIndicator>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<int,_LocationIndicator>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<int,_LocationIndicator>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___KeyCollection<int,_LocationIndicator>__GetEnumerator__
                   );
    func_?(&
                    MethodInfo__LocationIndicatorsManager__RecievedPlanetOwnershipsDataCallback_System__Collections__Generic__Dictionary<int,_MV::WorldObject::OwnershipData::PlanetOwnershipsEntry>_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
    method_00 = pMVar1;
  }
  bVar2 = MVGameControllerBase::MVGameControllerBase_get_IsAlive((MethodInfo *)0x0);
  if ((bVar2 != 0) &&
     (pMVar3 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0),
     pMVar3 != (MVNetworkGame *)0x0)) {
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    method_00 = (MethodInfo *)
                TypeInfo__PlanetOwnershipsManager->static_fields->_Instance_k__BackingField;
    this_02 = (DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
               *)func_?();
    DictionaryWithChangeEvent`2[TKey,TValue]+OnDictionaryChangeDelegate[Unity::IL2CPP::Metadata::
    __Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::
    DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
              (this_02,(Object *)this,
               MethodInfo__LocationIndicatorsManager__RecievedPlanetOwnershipsDataCallback_System__Collections__Generic__Dictionary<int,_MV::WorldObject::OwnershipData::PlanetOwnershipsEntry>_
               ,(MethodInfo *)0x0);
    if (method_00 == (MethodInfo *)0x0) goto code_?;
    PlanetOwnershipsManager::PlanetOwnershipsManager_remove_OnReceivedPlanetOwnershipData
              ((PlanetOwnershipsManager *)method_00,
               (Action_1_System_Collections_Generic_Dictionary_2_System_Int32_MV_WorldObject_OwnershipData_PlanetOwnershipsEntry_
                *)this_02,(MethodInfo *)0x0);
  }
  UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StopCoroutine
            ((MonoBehaviour *)this,(this->fields).updateCoroutine,(MethodInfo *)0x0);
  this_00 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
             *)(this->fields).indicators;
  if ((this_00 !=
       (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
        *)0x0) &&
     (this_03 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
                StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
                Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__get_Keys
                          (this_00,
                           MethodInfo__System__Collections__Generic__Dictionary<int,_LocationIndicator>__get_Keys__
                          ),
     this_03 !=
     (Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
      *)0x0)) {
    pDVar4 = mscorlib.dll::System::Collections::Generic::
             Dictionary`2[TKey,TValue]+ValueCollection[UnityEngine::UIElements::StyleSheets::
             StyleSheetCache+SheetHandleKey,System::Object]::
             Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__GetEnumerator
                       ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                         *)&stack0xffffffdc,
                        (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                         *)this_03,
                        MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___KeyCollection<int,_LocationIndicator>__GetEnumerator__
                       );
    key = pDVar4->_currentValue;
    while( true ) {
      bVar2 = mscorlib.dll::System::Collections::Generic::
              Dictionary`2[TKey,TValue]+KeyCollection[TKey,TValue]+Enumerator[System::UInt32,System
              ::Object]::
              Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                        ((Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_UInt32_System_Object_
                          *)&stack0xffffffc8,
                         MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<int,_LocationIndicator>__MoveNext__
                        );
      if (bVar2 == 0) {
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                  ((Object *)&stack0xffffffc8,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<int,_LocationIndicator>__Dispose__
                   ,method_00);
        *unaff_FS_OFFSET = this_02;
        return;
      }
      this_01 = (this->fields).indicators;
      if ((this_01 == (Dictionary_2_System_Int32_LocationIndicator_ *)0x0) ||
         (this_02 = (DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                     *)mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System
                       ::Object]::Dictionary_2_System_Int32_System_Object__get_Item
                                 ((Dictionary_2_System_Int32_System_Object_ *)this_01,(int32_t)key,
                                  MethodInfo__System__Collections__Generic__Dictionary<int,_LocationIndicator>__get_Item_int_
                                 ),
         this_02 ==
         (DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
          *)0x0)) break;
      method_00 = (MethodInfo *)&UNK_?;
      obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                      ((Component *)this_02,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                ((Object_1 *)obj,(MethodInfo *)0x0);
    }
  }
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void 
   RecievedPlanetOwnershipsDataCallback(Dictionary`2[System.Int32,MV.WorldObject.OwnershipData.PlanetOwnershipsEntry])
    */

void Assembly-CSharp.dll::LocationIndicatorsManager::
     LocationIndicatorsManager_RecievedPlanetOwnershipsDataCallback
               (LocationIndicatorsManager *this,
               Dictionary_2_System_Int32_MV_WorldObject_OwnershipData_PlanetOwnershipsEntry_ *data,
               MethodInfo *method)

{
  LocationIndicatorsManager_SetIndicatorsOwnership(this,(MethodInfo *)0x0);
  return;
}


/* Void SetIndicatorsOwnership() */

void Assembly-CSharp.dll::LocationIndicatorsManager::
     LocationIndicatorsManager_SetIndicatorsOwnership
               (LocationIndicatorsManager *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffff98;
  puVar5 = &stack0xffffff98;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::OwnershipData::PlanetOwnershipsEntry>__ContainsKey_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_LocationIndicator>__GetEnumerator__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::OwnershipData::PlanetOwnershipsEntry>__get_Item_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_LocationIndicator>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_LocationIndicator>__MoveNext__
                   );
    in_stack_6 =
         &
         MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_LocationIndicator>__get_Current__
    ;
    func_?();
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<int,_LocationIndicator>__get_Key__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<int,_LocationIndicator>__get_Value__
                   );
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__PlanetOwnershipsManager);
    cRam_? = '\x01';
  }
  pPVar7 = TypeInfo__PlanetOwnershipsManager->static_fields->_Instance_k__BackingField;
  if (pPVar7 != (PlanetOwnershipsManager *)0x0) {
    pMStack_8 = (MethodInfo *)(pPVar7->fields)._PlanetOwnershipsEntries_k__BackingField;
    this_00 = (Dictionary_2_System_UInt32_System_Object_ *)(this->fields).indicators;
    if (this_00 != (Dictionary_2_System_UInt32_System_Object_ *)0x0) {
      pDVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::UInt32,System::
               Object]::Dictionary_2_System_UInt32_System_Object__GetEnumerator
                         (&DStack_10,this_00,
                          MethodInfo__System__Collections__Generic__Dictionary<int,_LocationIndicator>__GetEnumerator__
                         );
      uStack_11 = 0;
      DStack_12._dictionary = pDVar9->_dictionary;
      DStack_12._version = pDVar9->_version;
      DStack_12._index = pDVar9->_index;
      DStack_12._current.key = (pDVar9->_current).key;
      DStack_12._16_8_ = *(undefined8 *)&(pDVar9->_current).value;
      uStack_1 = 1;
      pDStack_13 = &DStack_12;
      while( true ) {
        do {
          bVar14 = mscorlib.dll::System::Collections::Generic::
                  Dictionary`2[TKey,TValue]+Enumerator[System::UInt32,System::Object]::
                  Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                            (&DStack_12,
                             MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_LocationIndicator>__MoveNext__
                            );
          if (bVar14 == 0) {
            uStack_1 = 0xffffffff;
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                      ((Object *)&DStack_12,
                       (ExceptionArgument__Enum)
                       MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_LocationIndicator>__Dispose__
                       ,(MethodInfo *)in_stack_6);
            *unaff_FS_OFFSET = uStack_3;
            return;
          }
          this_01 = DStack_12._current.value;
          uStack_15 = DStack_12._current.key;
          if (pMStack_8 == (MethodInfo *)0x0) goto code_?;
          bVar14 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                  Single]::Dictionary_2_System_Int32_System_Single__ContainsKey
                            ((Dictionary_2_System_Int32_System_Single_ *)pMStack_8,
                             DStack_12._current.key,
                             MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::OwnershipData::PlanetOwnershipsEntry>__ContainsKey_int_
                            );
        } while (bVar14 == 0);
        in_stack_6 = (MethodInfo **)pMStack_8;
        pOVar16 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                 Object]::Dictionary_2_System_Int32_System_Object__get_Item
                           ((Dictionary_2_System_Int32_System_Object_ *)pMStack_8,uStack_15,
                            MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::OwnershipData::PlanetOwnershipsEntry>__get_Item_int_
                           );
        if ((pOVar16 == (Object *)0x0) ||
           (PStack_17 = CONCAT31(PStack_17._1_3_,*(undefined1 *)&pOVar16[1].monitor),
           (LocationIndicator *)this_01 == (LocationIndicator *)0x0)) break;
        LocationIndicator::LocationIndicator_SetOwnership
                  ((LocationIndicator *)this_01,PStack_17,(MethodInfo *)0x0);
      }
    }
  }
code_?:
  func_?();
  pcVar18 = (code *)swi(3);
  (*pcVar18)();
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::LocationIndicatorsManager::LocationIndicatorsManager_Start
               (LocationIndicatorsManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__System__Action<System::Collections::Generic::Dictionary<int,_MV::WorldObject::OwnershipData::PlanetOwnershipsEntry>_>
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_LocationIndicator>__Dictionary__
                   );
    func_?(&TypeInfo__System__Collections__Generic__Dictionary<int,_LocationIndicator>);
    func_?(&
                    MethodInfo__LocationIndicatorsManager__RecievedPlanetOwnershipsDataCallback_System__Collections__Generic__Dictionary<int,_MV::WorldObject::OwnershipData::PlanetOwnershipsEntry>_
                   );
    cRam_? = '\x01';
  }
  this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                      ((Component *)this,(MethodInfo *)0x0);
  if (this_00 != (Transform *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetAsFirstSibling
              (this_00,(MethodInfo *)0x0);
    this_01 = (Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef_
               *)func_?(
                                TypeInfo__System__Collections__Generic__Dictionary<int,_LocationIndicator>
                                );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::TextCore::
    Text::TextResourceManager+FontAssetRef]::
    Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef___ctor
              (this_01,
               MethodInfo__System__Collections__Generic__Dictionary<int,_LocationIndicator>__Dictionary__
              );
    ppDVar1 = &(this->fields).indicators;
    *ppDVar1 = (Dictionary_2_System_Int32_LocationIndicator_ *)this_01;
    func_?(ppDVar1,this_01);
    if (cRam_? == '\0') {
      func_?(&TypeInfo__PlanetOwnershipsManager);
      cRam_? = '\x01';
    }
    pPVar2 = TypeInfo__PlanetOwnershipsManager->static_fields->_Instance_k__BackingField;
    if (pPVar2 != (PlanetOwnershipsManager *)0x0) {
      if ((pPVar2->fields)._RecievedPlanetOwnershipData_k__BackingField == 0) {
        if (cRam_? == '\0') {
          func_?(&TypeInfo__PlanetOwnershipsManager);
          cRam_? = '\x01';
        }
        pPVar2 = TypeInfo__PlanetOwnershipsManager->static_fields->_Instance_k__BackingField;
        this_02 = (DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                   *)func_?(
                                    TypeInfo__System__Action<System::Collections::Generic::Dictionary<int,_MV::WorldObject::OwnershipData::PlanetOwnershipsEntry>_>
                                    );
        DictionaryWithChangeEvent`2[TKey,TValue]+OnDictionaryChangeDelegate[Unity::IL2CPP::Metadata
        ::__Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::
        DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
                  (this_02,(Object *)this,
                   MethodInfo__LocationIndicatorsManager__RecievedPlanetOwnershipsDataCallback_System__Collections__Generic__Dictionary<int,_MV::WorldObject::OwnershipData::PlanetOwnershipsEntry>_
                   ,(MethodInfo *)0x0);
        if (pPVar2 == (PlanetOwnershipsManager *)0x0) goto code_?;
        PlanetOwnershipsManager::PlanetOwnershipsManager_add_OnReceivedPlanetOwnershipData
                  (pPVar2,(Action_1_System_Collections_Generic_Dictionary_2_System_Int32_MV_WorldObject_OwnershipData_PlanetOwnershipsEntry_
                           *)this_02,(MethodInfo *)0x0);
      }
      else {
        LocationIndicatorsManager_SetIndicatorsOwnership(this,(MethodInfo *)0x0);
      }
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      method_00 = TypeInfo__LocationIndicatorsManager___UpdateCoroutine_d__13;
      value = (Object *)func_?();
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
      value[1].klass = (Object__Class *)0x0;
      value[2].klass = (Object__Class *)this;
      func_?(value + 2,this);
      ppIVar3 = &(this->fields).updateCoroutine;
      *ppIVar3 = (IEnumerator *)value;
      func_?(ppIVar3,value);
      UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StartCoroutine_Auto
                ((MonoBehaviour *)this,*ppIVar3,(MethodInfo *)0x0);
      return;
    }
  }
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* IEnumerator UpdateCoroutine() */

IEnumerator *
Assembly-CSharp.dll::LocationIndicatorsManager::LocationIndicatorsManager_UpdateCoroutine
          (LocationIndicatorsManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__LocationIndicatorsManager___UpdateCoroutine_d__13);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__LocationIndicatorsManager___UpdateCoroutine_d__13;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  value[1].klass = (Object__Class *)0x0;
  value[2].klass = (Object__Class *)this;
  func_?(value + 2,this);
  return (IEnumerator *)value;
}


/* LocationIndicatorsManager get_Instance() */

LocationIndicatorsManager *
Assembly-CSharp.dll::LocationIndicatorsManager::LocationIndicatorsManager_get_Instance
          (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__LocationIndicatorsManager);
    cRam_? = '\x01';
  }
  return TypeInfo__LocationIndicatorsManager->static_fields->_Instance_k__BackingField;
}


/* Void set_Instance(LocationIndicatorsManager) */

void Assembly-CSharp.dll::LocationIndicatorsManager::LocationIndicatorsManager_set_Instance
               (LocationIndicatorsManager *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__LocationIndicatorsManager);
    cRam_? = '\x01';
  }
  TypeInfo__LocationIndicatorsManager->static_fields->_Instance_k__BackingField = value;
  func_?(TypeInfo__LocationIndicatorsManager->static_fields,value);
  return;
}

