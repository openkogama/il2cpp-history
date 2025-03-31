
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


/* Boolean CreateIndicatorIfNotDefined(MVPlayer, List`1[System.Int32]) */

bool Assembly-CSharp.dll::LocationIndicatorsManager::
     LocationIndicatorsManager_CreateIndicatorIfNotDefined
               (LocationIndicatorsManager *this,MVPlayer *player,
               List_1_System_Int32_ *removeIndicators,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_LocationIndicator>__Add_int__LocationIndicator_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_LocationIndicator>__ContainsKey_int_
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<int>__Remove_int_);
    func_?(&
                    LocationIndicator_MethodInfo__UnityEngine__Object__Instantiate<LocationIndicator>_LocationIndicator__UnityEngine__Transform_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if (player != (MVPlayer *)0x0) {
    key = (player->fields)._ProfileID_k__BackingField;
    pDVar1 = (this->fields).indicators;
    if (pDVar1 != (Dictionary_2_System_Int32_LocationIndicator_ *)0x0) {
      bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Single]
              ::Dictionary_2_System_Int32_System_Single__ContainsKey
                        ((Dictionary_2_System_Int32_System_Single_ *)pDVar1,key,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_LocationIndicator>__ContainsKey_int_
                        );
      if (bVar2 == 0) {
        pMVar3 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
        if (pMVar3 == (MVLocalPlayer *)0x0) goto code_?;
        if (key != (pMVar3->fields)._._ProfileID_k__BackingField) {
          original = (this->fields).indicatorPrefab;
          parent = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                             ((Component *)this,(MethodInfo *)0x0);
          if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
            this = (LocationIndicatorsManager *)TypeInfo__UnityEngine__Object;
            func_?();
          }
          value = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_5
                            ((Object *)original,parent,
                             LocationIndicator_MethodInfo__UnityEngine__Object__Instantiate<LocationIndicator>_LocationIndicator__UnityEngine__Transform_
                            );
          if (value != (Object *)0x0) {
            value[5].klass = (Object__Class *)player;
            func_?(value + 5,player);
            pUVar4 = (player->fields)._UserProfileData_k__BackingField;
            if ((pUVar4 != (UserProfileData *)0x0) &&
               (pOVar5 = value[3].klass, pOVar5 != (Object__Class *)0x0)) {
              pIVar6 = (pOVar5->_0).image;
              (*(code *)pIVar6[0x12].name)(pOVar5,(pUVar4->fields).UserName,pIVar6[0x12].nameNoExt);
              pDVar1 = (this->fields).indicators;
              if (pDVar1 != (Dictionary_2_System_Int32_LocationIndicator_ *)0x0) {
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                Object]::Dictionary_2_System_Int32_System_Object__Add
                          ((Dictionary_2_System_Int32_System_Object_ *)pDVar1,key,value,
                           MethodInfo__System__Collections__Generic__Dictionary<int,_LocationIndicator>__Add_int__LocationIndicator_
                          );
                return 1;
              }
            }
          }
          goto code_?;
        }
      }
      if (removeIndicators != (List_1_System_Int32_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::List`1[System::Int32]::
        List_1_System_Int32__Remove
                  (removeIndicators,key,
                   MethodInfo__System__Collections__Generic__List<int>__Remove_int_);
        return 0;
      }
    }
  }
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  bVar2 = (*pcVar7)();
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
    func_?(&
                    MethodInfo__System__Collections__Generic__List<int>__List_System__Collections__Generic__IEnumerable<int>_
                   );
    func_?(&TypeInfo__System__Collections__Generic__List<int>);
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  pOStack_4 = (Object__Class *)0x0;
  pMVar5 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar5 != (MVNetworkGame *)0x0) &&
     (this_00 = (pMVar5->fields).playerContainer, this_00 != (MVPlayerContainer *)0x0)) {
    pDVar6 = MVPlayerContainer::MVPlayerContainer_get_ActivePlayers(this_00,(MethodInfo *)0x0);
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
      this_02 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                func_?();
      mscorlib.dll::System::Collections::Generic::List`1[System::Int32]::
      List_1_System_Int32___ctor_1
                ((List_1_System_Int32_ *)this_02,(IEnumerable_1_System_Int32_ *)collection,
                 MethodInfo__System__Collections__Generic__List<int>__List_System__Collections__Generic__IEnumerable<int>_
                );
      bVar7 = false;
      if (pDVar6 != (Dictionary_2_TKey_TValue_ValueCollection_System_Int32_MVPlayer_ *)0x0) {
        pDVar8 = pDVar6->klass;
        uVar9 = 0;
        uVar10._0_1_ = (pDVar8->_1).rank;
        uVar10._1_1_ = (pDVar8->_1).minimumAlignment;
        if (uVar10 != 0) {
          do {
            if (pDVar8->interfaceOffsets[uVar9].interfaceType ==
                (Il2CppClass *)TypeInfo__System__Collections__Generic__IEnumerable<MVPlayer>) {
              ppMVar11 = &(&(pDVar6->klass->vtable).Equals)
                          [pDVar6->klass->interfaceOffsets[uVar9].offset].method;
              goto code_?;
            }
            uVar9 = uVar9 + 1;
          } while (uVar9 < uVar10);
        }
        ppMVar11 = (MethodInfo **)func_?();
code_?:
        piVar12 = (int *)(*(code *)*ppMVar11)();
        uStack_1 = 1;
code_?:
        do {
          if (piVar12 == (int *)0x0) break;
          uVar9 = 0;
          uVar10 = *(ushort *)(*piVar12 + 0xb6);
          if (uVar10 != 0) {
            do {
              if (*(IEnumerator__Class **)(*(int *)(*piVar12 + 0x58) + (uint)uVar9 * 8) ==
                  TypeInfo__System__Collections__IEnumerator) {
                puVar13 = (undefined4 *)
                          (*piVar12 +
                          (*(int *)(*(int *)(*piVar12 + 0x58) + 4 + (uint)uVar9 * 8) + 0x18) * 8);
                goto code_?;
              }
              uVar9 = uVar9 + 1;
            } while (uVar9 < uVar10);
          }
          puVar13 = (undefined4 *)func_?();
code_?:
          cVar14 = (*(code *)*puVar13)();
          if (cVar14 == '\0') {
            uStack_1 = 0xffffffff;
            if (piVar12 != (int *)0x0) {
              func_?();
            }
            uStack_1 = 0xffffffff;
            if (this_02 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
            {
              pLVar15 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                        RegularExpressions::RegexCharClass+SingleRange]::
                        List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                                  ((List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                                    *)&stack0xffffffb4,this_02,
                                   MethodInfo__System__Collections__Generic__List<int>__GetEnumerator__
                                  );
              uStack_1 = 4;
              key_00 = pLVar15->_current;
              goto code_?;
            }
            break;
          }
          if (piVar12 == (int *)0x0) break;
          uVar9 = 0;
          uVar10 = *(ushort *)(*piVar12 + 0xb6);
          if (uVar10 != 0) {
            do {
              if (*(IEnumerator_1_MVPlayer___Class **)(*(int *)(*piVar12 + 0x58) + (uint)uVar9 * 8)
                  == TypeInfo__System__Collections__Generic__IEnumerator<MVPlayer>) {
                puVar13 = (undefined4 *)
                          (*piVar12 +
                          (*(int *)(*(int *)(*piVar12 + 0x58) + 4 + (uint)uVar9 * 8) + 0x18) * 8);
                goto code_?;
              }
              uVar9 = uVar9 + 1;
            } while (uVar9 < uVar10);
          }
          puVar13 = (undefined4 *)func_?();
code_?:
          pOVar16 = (Object__Class *)(*(code *)*puVar13)();
          if (cRam_? == '\0') {
            func_?();
            func_?();
            func_?();
            func_?();
            func_?();
            cRam_? = '\x01';
          }
          if (pOVar16 == (Object__Class *)0x0) break;
          key = (pOVar16->_0).parent;
          pDVar17 = (this->fields).indicators;
          if (pDVar17 == (Dictionary_2_System_Int32_LocationIndicator_ *)0x0) break;
          bVar18 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                  Single]::Dictionary_2_System_Int32_System_Single__ContainsKey
                            ((Dictionary_2_System_Int32_System_Single_ *)pDVar17,(int32_t)key,
                             MethodInfo__System__Collections__Generic__Dictionary<int,_LocationIndicator>__ContainsKey_int_
                            );
          if (bVar18 == 0) {
            pMVar19 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
            if (pMVar19 == (MVLocalPlayer *)0x0) break;
            if (key != (Il2CppClass *)(pMVar19->fields)._._ProfileID_k__BackingField) {
              original = (this->fields).indicatorPrefab;
              parent = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                 ((Component *)this,(MethodInfo *)0x0);
              if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
                in_stack_20 = TypeInfo__UnityEngine__Object;
                func_?();
              }
              value = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_5
                                ((Object *)original,parent,
                                 LocationIndicator_MethodInfo__UnityEngine__Object__Instantiate<LocationIndicator>_LocationIndicator__UnityEngine__Transform_
                                );
              if (value == (Object *)0x0) break;
              value[5].klass = pOVar16;
              func_?();
              if (((pOVar16->_0).klass == (Il2CppClass *)0x0) ||
                 (value[3].klass == (Object__Class *)0x0)) break;
              (*(code *)((value[3].klass)->_0).image[0x12].name)();
              pDVar17 = (this->fields).indicators;
              if (pDVar17 == (Dictionary_2_System_Int32_LocationIndicator_ *)0x0) break;
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]
              ::Dictionary_2_System_Int32_System_Object__Add
                        ((Dictionary_2_System_Int32_System_Object_ *)pDVar17,(int32_t)key,value,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_LocationIndicator>__Add_int__LocationIndicator_
                        );
              bVar7 = true;
              goto code_?;
            }
          }
          if (this_02 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
          break;
          mscorlib.dll::System::Collections::Generic::List`1[System::Int32]::
          List_1_System_Int32__Remove
                    ((List_1_System_Int32_ *)this_02,(int32_t)key,
                     MethodInfo__System__Collections__Generic__List<int>__Remove_int_);
        } while( true );
      }
    }
  }
code_?:
  func_?();
  func_?();
  pcVar21 = (code *)swi(3);
  (*pcVar21)();
  return;
code_?:
  bVar18 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Text::
          RegularExpressions::RegexCharClass+SingleRange]::
          List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange__MoveNext
                    ((List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                      *)&pOStack_4,
                     MethodInfo__System__Collections__Generic__List_1_T___Enumerator<int>__MoveNext__
                    );
  if (bVar18 == 0) {
    uStack_1 = 0xffffffff;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)&pOStack_4,
               (ExceptionArgument__Enum)
               MethodInfo__System__Collections__Generic__List_1_T___Enumerator<int>__Dispose__,
               (MethodInfo *)in_stack_20);
    uStack_1 = 0xffffffff;
    if ((bVar7) && ((this->fields).isPlanetOwnershipsRequestPending == 0)) {
      LocationIndicatorsManager_SetIndicatorsOwnership(this,(MethodInfo *)0x0);
    }
    *unaff_FS_OFFSET = uStack_3;
    return;
  }
  pDVar17 = (this->fields).indicators;
  if (pDVar17 == (Dictionary_2_System_Int32_LocationIndicator_ *)0x0) goto code_?;
  RVar22 = key_00;
  this_03 = (Component *)
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
            Dictionary_2_System_Int32_System_Object__get_Item
                      ((Dictionary_2_System_Int32_System_Object_ *)pDVar17,(int32_t)key_00,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_LocationIndicator>__get_Item_int_
                      );
  if (this_03 == (Component *)0x0) goto code_?;
  in_stack_20 = (Object_1__Class *)&UNK_?;
  obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                  (this_03,(MethodInfo *)0x0);
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
            ((Object_1 *)obj,(MethodInfo *)0x0);
  pDVar17 = (this->fields).indicators;
  if (pDVar17 == (Dictionary_2_System_Int32_LocationIndicator_ *)0x0) goto code_?;
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
  Dictionary_2_System_Int32_System_Object__Remove
            ((Dictionary_2_System_Int32_System_Object_ *)pDVar17,(int32_t)key_00,
             MethodInfo__System__Collections__Generic__Dictionary<int,_LocationIndicator>__Remove_int_
            );
  key_00 = RVar22;
  goto code_?;
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
  this_03 = (DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
             *)*unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &stack0xfffffff0;
  pMVar1 = (MVNetworkGame *)&stack0xffffffbc;
  this_02 = (MVNetworkGame *)&stack0xffffffbc;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<MV::WorldObject::OwnershipData::PlanetOwnershipsData>)
    ;
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
                    MethodInfo__LocationIndicatorsManager__RecievedPlanetOwnershipsDataCallback_MV__WorldObject__OwnershipData__PlanetOwnershipsData_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
    this_02 = pMVar1;
  }
  bVar2 = MVGameControllerBase::MVGameControllerBase_get_IsAlive((MethodInfo *)0x0);
  if (bVar2 != 0) {
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar1 != (MVNetworkGame *)0x0) {
      this_02 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      this_03 = (DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                 *)func_?();
      DictionaryWithChangeEvent`2[TKey,TValue]+OnDictionaryChangeDelegate[Unity::IL2CPP::Metadata::
      __Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::
      DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
                (this_03,(Object *)0x0,
                 MethodInfo__LocationIndicatorsManager__RecievedPlanetOwnershipsDataCallback_MV__WorldObject__OwnershipData__PlanetOwnershipsData_
                 ,(MethodInfo *)0x0);
      if (this_02 == (MVNetworkGame *)0x0) goto code_?;
      MVNetworkGame::MVNetworkGame_remove_ReceivedPlanetOwnershipData
                (this_02,(Action_1_MV_WorldObject_OwnershipData_PlanetOwnershipsData_ *)this_03,
                 (MethodInfo *)0x0);
    }
  }
  UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StopCoroutine
            ((MonoBehaviour *)this,(this->fields).updateCoroutine,(MethodInfo *)0x0);
  this_00 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
             *)(this->fields).indicators;
  if (this_00 !=
      (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
       *)0x0) {
    this_04 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
              StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
              Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__get_Keys
                        (this_00,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_LocationIndicator>__get_Keys__
                        );
    if (this_04 !=
        (Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
         *)0x0) {
      pDVar3 = mscorlib.dll::System::Collections::Generic::
               Dictionary`2[TKey,TValue]+ValueCollection[UnityEngine::UIElements::StyleSheets::
               StyleSheetCache+SheetHandleKey,System::Object]::
               Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__GetEnumerator
                         ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                           *)&stack0xffffffd8,
                          (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                           *)this_04,
                          MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___KeyCollection<int,_LocationIndicator>__GetEnumerator__
                         );
      key = (Action_1_MV_WorldObject_OwnershipData_PlanetOwnershipsData_ *)pDVar3->_currentValue;
      while( true ) {
        bVar2 = mscorlib.dll::System::Collections::Generic::
                Dictionary`2[TKey,TValue]+KeyCollection[TKey,TValue]+Enumerator[System::
                UInt32,System::Object]::
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
                     ,(MethodInfo *)this_02);
          *unaff_FS_OFFSET = this_03;
          return;
        }
        this_01 = (this->fields).indicators;
        if (this_01 == (Dictionary_2_System_Int32_LocationIndicator_ *)0x0) break;
        this_03 = (DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                   *)mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                     Object]::Dictionary_2_System_Int32_System_Object__get_Item
                               ((Dictionary_2_System_Int32_System_Object_ *)this_01,(int32_t)key,
                                MethodInfo__System__Collections__Generic__Dictionary<int,_LocationIndicator>__get_Item_int_
                               );
        if (this_03 ==
            (DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
             *)0x0) break;
        this_02 = (MVNetworkGame *)&UNK_?;
        obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)this_03,(MethodInfo *)0x0);
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                  ((Object_1 *)obj,(MethodInfo *)0x0);
      }
    }
  }
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void RecievedPlanetOwnershipsDataCallback(PlanetOwnershipsData) */

void Assembly-CSharp.dll::LocationIndicatorsManager::
     LocationIndicatorsManager_RecievedPlanetOwnershipsDataCallback
               (PlanetOwnershipsData *data,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pLVar1 = TypeInfo__LocationIndicatorsManager->static_fields->_Instance_k__BackingField;
  if (pLVar1 != (LocationIndicatorsManager *)0x0) {
    (pLVar1->fields).isPlanetOwnershipsRequestPending = 0;
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    pLVar1 = TypeInfo__LocationIndicatorsManager->static_fields->_Instance_k__BackingField;
    if (pLVar1 != (LocationIndicatorsManager *)0x0) {
      (pLVar1->fields).planetOwnershipsData = data;
      func_?();
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      data = (PlanetOwnershipsData *)
             TypeInfo__LocationIndicatorsManager->static_fields->_Instance_k__BackingField;
      if ((LocationIndicatorsManager *)data != (LocationIndicatorsManager *)0x0) {
        method = (MethodInfo *)0x0;
        *unaff_FS_OFFSET = &stack0xfffffff0;
        if (cRam_? == '\0') {
          func_?(&
                          MethodInfo__System__Collections__Generic__Dictionary<int,_LocationIndicator>__TryGetValue_int__LocationIndicator__
                         );
          func_?(&
                          MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::OwnershipData::PlanetOwnershipsEntry>__Dispose__
                         );
          func_?(&
                          MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::OwnershipData::PlanetOwnershipsEntry>__MoveNext__
                         );
          func_?(&
                          MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::OwnershipData::PlanetOwnershipsEntry>__get_Current__
                         );
          func_?(&
                          MethodInfo__System__Collections__Generic__List<MV::WorldObject::OwnershipData::PlanetOwnershipsEntry>__GetEnumerator__
                         );
          cRam_? = '\x01';
        }
        LStack_2._list = (List_1_System_Object_ *)0x0;
        LStack_2._index = 0;
        LStack_2._version = 0;
        LStack_2._current = (Object *)0x0;
        pLStack_3 = (LocationIndicator *)0x0;
        pPVar4 = (((LocationIndicatorsManager *)data)->fields).planetOwnershipsData;
        if ((pPVar4 != (PlanetOwnershipsData *)0x0) &&
           (this = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                   (pPVar4->fields).planetOwnerships,
           this != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)) {
          this_00 = (Dictionary_2_System_Int32_LocationIndicator_ *)&UNK_?;
          pLVar5 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                   RegularExpressions::RegexCharClass+SingleRange]::
                   List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                             (&LStack_6,this,
                              MethodInfo__System__Collections__Generic__List<MV::WorldObject::OwnershipData::PlanetOwnershipsEntry>__GetEnumerator__
                             );
          LStack_2._list = (List_1_System_Object_ *)pLVar5->_list;
          LStack_2._index = pLVar5->_index;
          LStack_2._version = pLVar5->_version;
          LStack_2._current = *(Object **)&pLVar5->_current;
          LStack_6._version = 0;
          LStack_6._current = (RegexCharClass_SingleRange)&LStack_2;
          while( true ) {
            do {
              bVar7 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::
                      Object]::List_1_T_Enumerator_System_Object__MoveNext
                                (&LStack_2,
                                 MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::OwnershipData::PlanetOwnershipsEntry>__MoveNext__
                                );
              pOVar8 = LStack_2._current;
              if (bVar7 == 0) {
                mscorlib.dll::System::ThrowHelper::
                ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                          ((Object *)&LStack_2,
                           (ExceptionArgument__Enum)
                           MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::OwnershipData::PlanetOwnershipsEntry>__Dispose__
                           ,method);
                *unaff_FS_OFFSET = this_00;
                return;
              }
              if (cRam_? == '\0') {
                data = (PlanetOwnershipsData *)&TypeInfo__LocationIndicatorsManager;
                func_?();
                cRam_? = '\x01';
              }
              pLVar1 = TypeInfo__LocationIndicatorsManager->static_fields->_Instance_k__BackingField
              ;
              if (((pLVar1 == (LocationIndicatorsManager *)0x0) ||
                  (this_00 = (pLVar1->fields).indicators,
                  (RegexCharClass_SingleRange)pOVar8 == (RegexCharClass_SingleRange)0x0)) ||
                 (this_00 == (Dictionary_2_System_Int32_LocationIndicator_ *)0x0))
              goto code_?;
              bVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System
                      ::Object]::Dictionary_2_System_Int32_System_Object__TryGetValue
                                ((Dictionary_2_System_Int32_System_Object_ *)this_00,
                                 *(int32_t *)((int)pOVar8 + 8),(Object **)&pLStack_3,
                                 MethodInfo__System__Collections__Generic__Dictionary<int,_LocationIndicator>__TryGetValue_int__LocationIndicator__
                                );
            } while (bVar7 == 0);
            data = (PlanetOwnershipsData *)CONCAT31(data._1_3_,*(undefined1 *)((int)pOVar8 + 0xc));
            pPVar4 = data;
            if (pLStack_3 == (LocationIndicator *)0x0) break;
            method = (MethodInfo *)data;
            data = (PlanetOwnershipsData *)pLStack_3;
            LocationIndicator::LocationIndicator_SetOwnership
                      (pLStack_3,(PlanetOwnershipType__Enum)pPVar4,(MethodInfo *)0x0);
          }
        }
      }
    }
  }
code_?:
  func_?();
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
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
  puStack_4 = &stack0xffffffb8;
  puVar5 = &stack0xffffffb8;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_LocationIndicator>__TryGetValue_int__LocationIndicator__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::OwnershipData::PlanetOwnershipsEntry>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::OwnershipData::PlanetOwnershipsEntry>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::OwnershipData::PlanetOwnershipsEntry>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MV::WorldObject::OwnershipData::PlanetOwnershipsEntry>__GetEnumerator__
                   );
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  pLStack_6 = (LocationIndicator *)0x0;
  pPVar7 = (this->fields).planetOwnershipsData;
  if ((pPVar7 != (PlanetOwnershipsData *)0x0) &&
     (this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                (pPVar7->fields).planetOwnerships,
     this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)) {
    pLVar8 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
             RegexCharClass+SingleRange]::
             List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                       (&LStack_9,this_00,
                        MethodInfo__System__Collections__Generic__List<MV::WorldObject::OwnershipData::PlanetOwnershipsEntry>__GetEnumerator__
                       );
    RVar10 = pLVar8->_current;
    LStack_9._version = 0;
    uStack_1 = 1;
    LStack_9._current = (RegexCharClass_SingleRange)&stack0xffffffc4;
    while( true ) {
      do {
        bVar11 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
                List_1_T_Enumerator_System_Object__MoveNext
                          ((List_1_T_Enumerator_System_Object_ *)&stack0xffffffc4,
                           MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::OwnershipData::PlanetOwnershipsEntry>__MoveNext__
                          );
        if (bVar11 == 0) {
          uStack_1 = 0xffffffff;
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                    ((Object *)&stack0xffffffc4,
                     (ExceptionArgument__Enum)
                     MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::OwnershipData::PlanetOwnershipsEntry>__Dispose__
                     ,unaff_EBX);
          *unaff_FS_OFFSET = uStack_3;
          return;
        }
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        pLVar12 = TypeInfo__LocationIndicatorsManager->static_fields->_Instance_k__BackingField;
        if (((pLVar12 == (LocationIndicatorsManager *)0x0) ||
            (this_01 = (pLVar12->fields).indicators, RVar10 == (RegexCharClass_SingleRange)0x0)) ||
           (this_01 == (Dictionary_2_System_Int32_LocationIndicator_ *)0x0)) goto code_?;
        bVar11 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                Object]::Dictionary_2_System_Int32_System_Object__TryGetValue
                          ((Dictionary_2_System_Int32_System_Object_ *)this_01,
                           *(int32_t *)((int)RVar10 + 8),(Object **)&pLStack_6,
                           MethodInfo__System__Collections__Generic__Dictionary<int,_LocationIndicator>__TryGetValue_int__LocationIndicator__
                          );
      } while (bVar11 == 0);
      this = (LocationIndicatorsManager *)CONCAT31(this._1_3_,*(undefined1 *)((int)RVar10 + 0xc));
      if (pLStack_6 == (LocationIndicator *)0x0) break;
      unaff_EBX = (MethodInfo *)this;
      LocationIndicator::LocationIndicator_SetOwnership
                (pLStack_6,(PlanetOwnershipType__Enum)this,(MethodInfo *)0x0);
    }
  }
code_?:
  func_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::LocationIndicatorsManager::LocationIndicatorsManager_Start
               (LocationIndicatorsManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<MV::WorldObject::OwnershipData::PlanetOwnershipsData>)
    ;
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_LocationIndicator>__Dictionary__
                   );
    func_?(&TypeInfo__System__Collections__Generic__Dictionary<int,_LocationIndicator>);
    func_?(&
                    MethodInfo__LocationIndicatorsManager__RecievedPlanetOwnershipsDataCallback_MV__WorldObject__OwnershipData__PlanetOwnershipsData_
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
    (this->fields).indicators = (Dictionary_2_System_Int32_LocationIndicator_ *)this_01;
    func_?(&(this->fields).indicators,this_01);
    (this->fields).isPlanetOwnershipsRequestPending = 1;
    this_02 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    this_03 = (DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
               *)func_?(
                                TypeInfo__System__Action<MV::WorldObject::OwnershipData::PlanetOwnershipsData>
                                );
    DictionaryWithChangeEvent`2[TKey,TValue]+OnDictionaryChangeDelegate[Unity::IL2CPP::Metadata::
    __Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::
    DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
              (this_03,(Object *)0x0,
               MethodInfo__LocationIndicatorsManager__RecievedPlanetOwnershipsDataCallback_MV__WorldObject__OwnershipData__PlanetOwnershipsData_
               ,(MethodInfo *)0x0);
    if (this_02 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_add_ReceivedPlanetOwnershipData
                (this_02,(Action_1_MV_WorldObject_OwnershipData_PlanetOwnershipsData_ *)this_03,
                 (MethodInfo *)0x0);
      this_04 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
      pMVar1 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
      if ((pMVar1 != (MVLocalPlayer *)0x0) && (this_04 != (MVNetworkGame_OperationRequests *)0x0)) {
        MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_GetActorsPlanetOwnerships
                  (this_04,(pMVar1->fields)._._ProfileID_k__BackingField,(MethodInfo *)0x0);
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        method_00 = TypeInfo__LocationIndicatorsManager___UpdateCoroutine_d__15;
        value = (Object *)func_?();
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                  (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
        value[1].klass = (Object__Class *)0x0;
        value[2].klass = (Object__Class *)this;
        func_?(value + 2,this);
        (this->fields).updateCoroutine = (IEnumerator *)value;
        func_?(&(this->fields).updateCoroutine,value);
        UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StartCoroutine_Auto
                  ((MonoBehaviour *)this,(this->fields).updateCoroutine,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* IEnumerator UpdateCoroutine() */

IEnumerator *
Assembly-CSharp.dll::LocationIndicatorsManager::LocationIndicatorsManager_UpdateCoroutine
          (LocationIndicatorsManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__LocationIndicatorsManager___UpdateCoroutine_d__15);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__LocationIndicatorsManager___UpdateCoroutine_d__15;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  value[2].klass = (Object__Class *)this;
  value[1].klass = (Object__Class *)0x0;
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

