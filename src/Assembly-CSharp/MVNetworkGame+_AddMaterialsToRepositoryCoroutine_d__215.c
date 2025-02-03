
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::MVNetworkGame+<AddMaterialsToRepositoryCoroutine>d__215::
     MVNetworkGame_AddMaterialsToRepositoryCoroutine_d_215_MoveNext
               (MVNetworkGame_AddMaterialsToRepositoryCoroutine_d_215 *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Boolean);
    func_?(&TypeInfo__System__Byte);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Keys__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<System::Object,_System::Object>__get_Current__
                   );
    func_?(&TypeInfo__System__Int32);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___KeyCollection<System::Object,_System::Object>__GetEnumerator__
                   );
    func_?(&
                    MaterialButtonTextureGenerator_MethodInfo__UnityEngine__Object__Instantiate<MaterialButtonTextureGenerator>_MaterialButtonTextureGenerator_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&TypeInfo__System__Single);
    func_?(&TypeInfo__System__String);
    func_?(&TypeInfo__UnityEngine__WaitForSecondsRealtime);
    cRam_? = '\x01';
  }
  uStack_1 = 1;
  iVar4 = (this->fields).__1__state;
  pMVar5 = (this->fields).__4__this;
  if (iVar4 == 0) {
    (this->fields).__1__state = -1;
    pWVar6 = (WaitForSecondsRealtime *)
              func_?(TypeInfo__UnityEngine__WaitForSecondsRealtime);
    UnityEngine.CoreModule.dll::UnityEngine::WaitForSecondsRealtime::WaitForSecondsRealtime__ctor
              (pWVar6,0.1,(MethodInfo *)0x0);
    (this->fields).__2__current = (Object *)pWVar6;
    func_?();
    (this->fields).__1__state = 1;
    *unaff_FS_OFFSET = uStack_3;
    return 1;
  }
  if (iVar4 == 1) {
    (this->fields).__1__state = -1;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__PrefabPool);
      cRam_? = '\x01';
    }
    pPVar7 = TypeInfo__PrefabPool->static_fields->instance;
    if (pPVar7 != (PrefabPool *)0x0) {
      pMVar8 = (pPVar7->fields).materialButtonTextureGenerator;
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      pMVar8 = (MaterialButtonTextureGenerator *)
               UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                         ((Object *)pMVar8,
                          MaterialButtonTextureGenerator_MethodInfo__UnityEngine__Object__Instantiate<MaterialButtonTextureGenerator>_MaterialButtonTextureGenerator_
                         );
      (this->fields)._materialButtonTextureGenerator_5__2 = pMVar8;
      func_?();
      this_03 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if (((this_03 != (MVNetworkGame *)0x0) &&
          (pMVar9 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_03,(MethodInfo *)0x0),
          pMVar9 != (MVLocalPlayer *)0x0)) &&
         (this_00 = (pMVar9->fields)._._SubscriptionRules_k__BackingField,
         this_00 != (SubscriptionRulesWrapper *)0x0)) {
        bVar10 = MVWorldObject.dll::MV::WorldObject::Subscription::SubscriptionRulesWrapper::
                SubscriptionRulesWrapper_HasBenefit
                          (this_00,SubscriptionBenefit__Enum_FreeBuildingMaterials,(MethodInfo *)0x0
                          );
        (this->fields)._isPlayerSubscriber_5__3 = bVar10;
        this_01 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                   *)(this->fields).materialList;
        if ((this_01 !=
             (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
              *)0x0) &&
           (this_04 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::
                      UIElements::StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
                      Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__get_Keys
                                (this_01,
                                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Keys__
                                ),
           this_04 !=
           (Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
            *)0x0)) {
          pDVar11 = mscorlib.dll::System::Collections::Generic::
                    Dictionary`2[TKey,TValue]+ValueCollection[UnityEngine::UIElements::StyleSheets::
                    StyleSheetCache+SheetHandleKey,System::Object]::
                    Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__GetEnumerator
                              ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                                *)&stack0xffffffa4,
                               (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                                *)this_04,
                               MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___KeyCollection<System::Object,_System::Object>__GetEnumerator__
                              );
          iVar12 = pDVar11->_index;
          iVar13 = pDVar11->_version;
          pOVar14 = pDVar11->_currentValue;
          (this->fields).__7__wrap3._dictionary =
               (Dictionary_2_System_Object_System_Object_ *)pDVar11->_dictionary;
          (this->fields).__7__wrap3._index = iVar12;
          (this->fields).__7__wrap3._version = iVar13;
          (this->fields).__7__wrap3._currentKey = pOVar14;
          unaff_EBX = (MethodInfo *)&UNK_?;
          func_?();
          (this->fields).__1__state = -3;
          goto code_?;
        }
      }
    }
code_?:
    func_?();
code_?:
    func_?();
code_?:
    func_?();
code_?:
    func_?();
  }
  else {
    if (iVar4 != 2) goto code_?;
    (this->fields).__1__state = -3;
code_?:
    bVar10 = mscorlib.dll::System::Collections::Generic::
            Dictionary`2[TKey,TValue]+KeyCollection[TKey,TValue]+Enumerator[System::
            Object,UnityEngine::UIElements::TextureId]::
            Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Object_UnityEngine_UIElements_TextureId__MoveNext
                      ((Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Object_UnityEngine_UIElements_TextureId_
                        *)&(this->fields).__7__wrap3,
                       MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                      );
    if (bVar10 == 0) {
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      (this->fields).__1__state = -1;
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                ((Object *)&(this->fields).__7__wrap3,
                 (ExceptionArgument__Enum)
                 MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<System::Object,_System::Object>__Dispose__
                 ,unaff_EBX);
      (this->fields).__7__wrap3._dictionary = (Dictionary_2_System_Object_System_Object_ *)0x0;
      (this->fields).__7__wrap3._index = 0;
      (this->fields).__7__wrap3._version = 0;
      (this->fields).__7__wrap3._currentKey = (Object *)0x0;
      pMVar8 = (this->fields)._materialButtonTextureGenerator_5__2;
      if (pMVar8 != (MaterialButtonTextureGenerator *)0x0) {
        obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)pMVar8,(MethodInfo *)0x0);
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                  ((Object_1 *)obj,(MethodInfo *)0x0);
        if (((pMVar5 != (MVNetworkGame *)0x0) &&
            (pMVar15 = (pMVar5->fields)._MaterialRepository_k__BackingField,
            pMVar15 != (MVMaterialRepository *)0x0)) &&
           (pMVar16 = MVMaterialRepository::MVMaterialRepository_GetMaterial
                                (pMVar15,0x15,(MethodInfo *)0x0), pMVar16 != (MVMaterial *)0x0)) {
          bVar10 = MVMaterial::MVMaterial_get_IsDestructible(pMVar16,(MethodInfo *)0x0);
          if (bVar10 != 0) goto code_?;
          pMVar15 = (pMVar5->fields)._MaterialRepository_k__BackingField;
          if ((pMVar15 != (MVMaterialRepository *)0x0) &&
             (pMVar16 = MVMaterialRepository::MVMaterialRepository_GetMaterial
                                  (pMVar15,0x15,(MethodInfo *)0x0), pMVar16 != (MVMaterial *)0x0)) {
            if ((pMVar16->fields).isUnlocked != 0) {
              MVGameControllerBase::MVGameControllerBase_RegisterOverrideMaterials
                        ((MethodInfo *)0x0);
code_?:
              *unaff_FS_OFFSET = uStack_3;
              return 0;
            }
            goto code_?;
          }
        }
      }
      goto code_?;
    }
    pOVar14 = (this->fields).__7__wrap3._currentKey;
    if (pOVar14 == (Object *)0x0) goto code_?;
    if ((pOVar14->klass->_0).element_class != (TypeInfo__System__Byte->_0).element_class)
    goto code_?;
    func_?();
    this_02 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
              (this->fields).materialList;
    pOVar14 = (Object *)func_?();
    if (this_02 == (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0)
    goto code_?;
    TVar17 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
             UIElements::TextureId]::
             Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                       (this_02,pOVar14,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    if ((TVar17.m_Index == 0) ||
       (((TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
         naturalAligment <= *(byte *)(*(int *)TVar17.m_Index + 0xb8) &&
        (*(Dictionary_2_System_Object_System_Object___Class **)
          (*(int *)(*(int *)TVar17.m_Index + 100) + -4 +
          (uint)(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                ->_1).naturalAligment * 4) ==
         TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)))) {
      pOVar14 = (Object *)func_?();
      if (TVar17.m_Index == 0) goto code_?;
      pSStack_18 = (String *)
                   mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                   Object,UnityEngine::UIElements::TextureId]::
                   Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                             ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                              TVar17.m_Index,pOVar14,
                              MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                             );
      if (pSStack_18 == (String *)0x0) {
code_?:
        pOVar14 = (Object *)func_?();
        pSStack_19 = (String *)
                     mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                     Object,UnityEngine::UIElements::TextureId]::
                     Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                               ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                                TVar17.m_Index,pOVar14,
                                MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                               );
        if (pSStack_19 != (String *)0x0) {
          TVar20.m_Index = (int32_t)(String *)0x0;
          if (*(String__Class **)pSStack_19 == TypeInfo__System__String) {
            TVar20 = (TextureId)pSStack_19;
          }
          pSStack_19 = (String *)TVar20.m_Index;
          if ((String *)TVar20.m_Index == (String *)0x0) goto code_?;
        }
        pOVar14 = (Object *)func_?();
        pSStack_21 = (String *)
                     mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                     Object,UnityEngine::UIElements::TextureId]::
                     Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                               ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                                TVar17.m_Index,pOVar14,
                                MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                               );
        if (pSStack_21 != (String *)0x0) {
          TVar20.m_Index = (int32_t)(String *)0x0;
          if (*(String__Class **)pSStack_21 == TypeInfo__System__String) {
            TVar20 = (TextureId)pSStack_21;
          }
          pSStack_21 = (String *)TVar20.m_Index;
          if ((String *)TVar20.m_Index == (String *)0x0) goto code_?;
        }
        pOVar14 = (Object *)func_?();
        TVar20 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                 ::UIElements::TextureId]::
                 Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                           (TVar17.m_Index,pOVar14,
                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                           );
        if (TVar20.m_Index == 0) goto code_?;
        if (*(Il2CppClass **)(*(int *)TVar20.m_Index + 0x20) ==
            (TypeInfo__System__Int32->_0).element_class) {
          pMVar22 = (MaterialSound__Enum *)func_?();
          materialSound = *pMVar22;
          pOVar14 = (Object *)func_?();
          TVar20 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                   Object,UnityEngine::UIElements::TextureId]::
                   Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                             (TVar17.m_Index,pOVar14,
                              MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                             );
          if (TVar20.m_Index == 0) goto code_?;
          if (*(Il2CppClass **)(*(int *)TVar20.m_Index + 0x20) !=
              (TypeInfo__System__Int32->_0).element_class) goto code_?;
          pAVar23 = (AvatarModifierPackageType__Enum *)func_?();
          modifierPackageType = *pAVar23;
          pOVar14 = (Object *)func_?();
          TVar20 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                   Object,UnityEngine::UIElements::TextureId]::
                   Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                             (TVar17.m_Index,pOVar14,
                              MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                             );
          if (TVar20.m_Index == 0) goto code_?;
          if (*(Il2CppClass **)(*(int *)TVar20.m_Index + 0x20) !=
              (TypeInfo__System__Int32->_0).element_class) goto code_?;
          piVar24 = (int32_t *)func_?();
          iVar12 = *piVar24;
          if ((this->fields)._isPlayerSubscriber_5__3 == 0) {
            pOVar14 = (Object *)func_?();
            TVar20 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                     Object,UnityEngine::UIElements::TextureId]::
                     Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                               (TVar17.m_Index,pOVar14,
                                MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                               );
            if (TVar20.m_Index == 0) goto code_?;
            if (*(Il2CppClass **)(*(int *)TVar20.m_Index + 0x20) !=
                (TypeInfo__System__Boolean->_0).element_class) goto code_?;
            pcVar25 = (char *)func_?();
            cVar26 = *pcVar25;
          }
          else {
            cVar26 = '\x01';
          }
          pOVar14 = (Object *)func_?();
          TVar17 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                   Object,UnityEngine::UIElements::TextureId]::
                   Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                             (TVar17.m_Index,pOVar14,
                              MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                             );
          if (TVar17.m_Index == 0) {
            physicalProperties = (Single__Array *)0x0;
code_?:
            if ((pMVar5 != (MVNetworkGame *)0x0) &&
               (pMVar15 = (pMVar5->fields)._MaterialRepository_k__BackingField,
               pMVar15 != (MVMaterialRepository *)0x0)) {
              MVMaterialRepository::MVMaterialRepository_AddMaterial
                        (pMVar15,pSStack_18,pSStack_19,pSStack_21,materialSound,modifierPackageType,
                         iVar12,cVar26 != '\0',physicalProperties,
                         (this->fields)._materialButtonTextureGenerator_5__2,(MethodInfo *)0x0);
              pWVar6 = (WaitForSecondsRealtime *)func_?();
              UnityEngine.CoreModule.dll::UnityEngine::WaitForSecondsRealtime::
              WaitForSecondsRealtime__ctor(pWVar6,0.01,(MethodInfo *)0x0);
              (this->fields).__2__current = (Object *)pWVar6;
              func_?();
              (this->fields).__1__state = 2;
              *unaff_FS_OFFSET = uStack_3;
              return 1;
            }
            goto code_?;
          }
          physicalProperties = (Single__Array *)func_?();
          if (physicalProperties != (Single__Array *)0x0) goto code_?;
          goto code_?;
        }
        goto code_?;
      }
      TVar20.m_Index = (int32_t)(String *)0x0;
      if (*(String__Class **)pSStack_18 == TypeInfo__System__String) {
        TVar20 = (TextureId)pSStack_18;
      }
      pSStack_18 = (String *)TVar20.m_Index;
      if ((String *)TVar20.m_Index != (String *)0x0) goto code_?;
      goto code_?;
    }
  }
  func_?();
code_?:
  func_?();
  this_05 = (Exception *)func_?();
  message = (String *)func_?();
  mscorlib.dll::System::Exception::Exception__ctor_1(this_05,message,(MethodInfo *)0x0);
  func_?();
  func_?();
  func_?();
  func_?();
  pcVar27 = (code *)swi(3);
  bVar10 = (*pcVar27)();
  return bVar10;
}


/* Void System.Collections.IEnumerator.Reset() */

void Assembly-CSharp.dll::MVNetworkGame+<AddMaterialsToRepositoryCoroutine>d__215::
     MVNetworkGame_AddMaterialsToRepositoryCoroutine_d_215_System_Collections_IEnumerator_Reset
               (MVNetworkGame_AddMaterialsToRepositoryCoroutine_d_215 *this,MethodInfo *method)

{
  uVar1 = func_?(&TypeInfo__System__NotSupportedException);
  this_00 = (NotSupportedException *)func_?(uVar1);
  mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor
            (this_00,(MethodInfo *)0x0);
  func_?(&
                  MethodInfo__MVNetworkGame___AddMaterialsToRepositoryCoroutine_d__215__System_Collections_IEnumerator_Reset__
                 );
  func_?(this_00);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void System.IDisposable.Dispose() */

void Assembly-CSharp.dll::MVNetworkGame+<AddMaterialsToRepositoryCoroutine>d__215::
     MVNetworkGame_AddMaterialsToRepositoryCoroutine_d_215_System_IDisposable_Dispose
               (MVNetworkGame_AddMaterialsToRepositoryCoroutine_d_215 *this,MethodInfo *method)

{
  puStack_1 = &DAT_?;
  uStack_2 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_2;
  iVar3 = (this->fields).__1__state;
  if ((iVar3 != -3) && (iVar3 != 2)) {
    *unaff_FS_OFFSET = uStack_2;
    return;
  }
  uStack_4 = 0xffffffff;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<System::Object,_System::Object>__Dispose__
                   );
    cRam_? = '\x01';
  }
  (this->fields).__1__state = -1;
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)&(this->fields).__7__wrap3,
             (ExceptionArgument__Enum)
             MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<System::Object,_System::Object>__Dispose__
             ,unaff_EDI);
  *unaff_FS_OFFSET = uStack_2;
  return;
}


/* Void <>m__Finally1() */

void Assembly-CSharp.dll::MVNetworkGame+<AddMaterialsToRepositoryCoroutine>d__215::
     MVNetworkGame_AddMaterialsToRepositoryCoroutine_d_215___m__Finally1
               (MVNetworkGame_AddMaterialsToRepositoryCoroutine_d_215 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<System::Object,_System::Object>__Dispose__
                   );
    cRam_? = '\x01';
  }
  (this->fields).__1__state = -1;
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)&(this->fields).__7__wrap3,
             (ExceptionArgument__Enum)
             MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<System::Object,_System::Object>__Dispose__
             ,unaff_EBP);
  return;
}

