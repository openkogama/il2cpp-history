
/* Void AddMaterial(String, String, String, MaterialSound, AvatarModifierPackageType, Int32,
   Boolean, Single[], MaterialButtonTextureGenerator) */

void Assembly-CSharp.dll::MVMaterialRepository::MVMaterialRepository_AddMaterial
               (MVMaterialRepository *this,String *name,String *description,String *path,
               MaterialSound__Enum materialSound,AvatarModifierPackageType__Enum modifierPackageType
               ,int32_t priceGold,bool isUnlocked,Single__Array *physicalProperties,
               MaterialButtonTextureGenerator *materialButtonTextureGenerator,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__List<MVMaterial>__Add_MVMaterial_);
    func_?(&MethodInfo__System__Collections__Generic__List<MVMaterial>__get_Count__);
    func_?(&TypeInfo__MVMaterial);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).materials;
  if (this_00 != (List_1_MVMaterial_ *)0x0) {
    materialId = (this_00->fields)._size;
    if (physicalProperties != (Single__Array *)0x0) {
      uVar1 = physicalProperties->max_length;
      if ((((uVar1 != 0) && (1 < uVar1)) && (2 < uVar1)) && ((3 < uVar1 && (4 < uVar1)))) {
        fVar2 = 0.0;
        fVar3 = 0.0;
        fVar4 = 0.0;
        fVar5 = 0.0;
        UnityEngine.TextCoreFontEngineModule.dll::UnityEngine::TextCore::GlyphMetrics::
        GlyphMetrics__ctor((GlyphMetrics *)&stack0xffffffe8,physicalProperties->vector[0],
                           physicalProperties->vector[1],physicalProperties->vector[2],
                           physicalProperties->vector[3],physicalProperties->vector[4],
                           (MethodInfo *)0x0);
        this_01 = (MVMaterial *)func_?(TypeInfo__MVMaterial);
        physicalProperties_00.bouncyness = fVar3;
        physicalProperties_00.friction = fVar2;
        physicalProperties_00.softness = fVar4;
        physicalProperties_00.staticFriction = fVar5;
        physicalProperties_00.toughness = 0.0;
        MVMaterial::MVMaterial__ctor_3
                  (this_01,materialId,name,description,physicalProperties_00,materialSound,
                   modifierPackageType,priceGold,isUnlocked,materialButtonTextureGenerator,
                   (MethodInfo *)0x0);
        mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
        List_1_System_Object__Add
                  ((List_1_System_Object_ *)this_00,(Object *)this_01,
                   MethodInfo__System__Collections__Generic__List<MVMaterial>__Add_MVMaterial_);
        return;
      }
      goto code_?;
    }
  }
  func_?();
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Boolean AllMaterialUnlocked() */

bool Assembly-CSharp.dll::MVMaterialRepository::MVMaterialRepository_AllMaterialUnlocked
               (MVMaterialRepository *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffb8;
  puVar5 = &stack0xffffffb8;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVMaterial>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVMaterial>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVMaterial>__get_Current__
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<MVMaterial>__GetEnumerator__);
    func_?(&MethodInfo__System__Collections__Generic__List<MVMaterial>__get_Count__);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  iVar6 = 0;
  iStack_7 = 0;
  method_00 = (MethodInfo *)(this->fields).materials;
  if (method_00 != (MethodInfo *)0x0) {
    pLVar8 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
             RegexCharClass+SingleRange]::
             List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                       (&LStack_9,
                        (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                        method_00,
                        MethodInfo__System__Collections__Generic__List<MVMaterial>__GetEnumerator__)
    ;
    LStack_10._list = (List_1_System_Object_ *)pLVar8->_list;
    LStack_10._index = pLVar8->_index;
    LStack_10._version = pLVar8->_version;
    LStack_10._current = *(Object **)&pLVar8->_current;
    LStack_9._version = 0;
    uStack_1 = 1;
    LStack_9._current = (RegexCharClass_SingleRange)&LStack_10;
    while( true ) {
      bVar11 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
              List_1_T_Enumerator_System_Object__MoveNext
                        (&LStack_10,
                         MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVMaterial>__MoveNext__
                        );
      if (bVar11 == 0) break;
      if ((RegexCharClass_SingleRange)LStack_10._current == (RegexCharClass_SingleRange)0x0)
      goto code_?;
      if (*(char *)((int)LStack_10._current + 0xc) != '\0') {
        iVar6 = iVar6 + 1;
        iStack_7 = iVar6;
      }
    }
    uStack_1 = 0xffffffff;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)&LStack_10,
               (ExceptionArgument__Enum)
               MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVMaterial>__Dispose__
               ,method_00);
    uStack_1 = 0xffffffff;
    pLVar12 = (this->fields).materials;
    if (pLVar12 != (List_1_MVMaterial_ *)0x0) {
      iVar13 = (pLVar12->fields)._size;
      *unaff_FS_OFFSET = uStack_3;
      return iVar13 == iVar6;
    }
  }
code_?:
  uVar14 = func_?();
  func_?(uVar14);
  pcVar15 = (code *)swi(3);
  bVar11 = (*pcVar15)();
  return bVar11;
}


/* Void ForceGenerateMaterialButtonTextures() */

void Assembly-CSharp.dll::MVMaterialRepository::
     MVMaterialRepository_ForceGenerateMaterialButtonTextures
               (MVMaterialRepository *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__List<MVMaterial>__get_Count__);
    func_?(&MethodInfo__System__Collections__Generic__List<MVMaterial>__get_Item_int_);
    func_?(&
                    MaterialButtonTextureGenerator_MethodInfo__UnityEngine__Object__Instantiate<MaterialButtonTextureGenerator>_MaterialButtonTextureGenerator_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__PrefabPool);
    cRam_? = '\x01';
  }
  pPVar1 = TypeInfo__PrefabPool->static_fields->instance;
  if (pPVar1 != (PrefabPool *)0x0) {
    pMVar2 = (pPVar1->fields).materialButtonTextureGenerator;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    pMVar2 = (MaterialButtonTextureGenerator *)
             UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                       ((Object *)pMVar2,
                        MaterialButtonTextureGenerator_MethodInfo__UnityEngine__Object__Instantiate<MaterialButtonTextureGenerator>_MaterialButtonTextureGenerator_
                       );
    index = 0;
    pLVar3 = (this->fields).materials;
    if (pLVar3 != (List_1_MVMaterial_ *)0x0) {
      while (index < (pLVar3->fields)._size) {
        this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                  (this->fields).materials;
        if (((this_00 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
            || (RVar4 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                        RegularExpressions::RegexCharClass+SingleRange]::
                        List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                  (this_00,index,
                                   MethodInfo__System__Collections__Generic__List<MVMaterial>__get_Item_int_
                                  ), RVar4 == (RegexCharClass_SingleRange)0x0)) ||
           (pMVar2 == (MaterialButtonTextureGenerator *)0x0)) goto code_?;
        pTVar5 = MaterialButtonTextureGenerator::MaterialButtonTextureGenerator_TakePicture
                           (pMVar2,*(Mesh **)((int)RVar4 + 0x10),(MethodInfo *)0x0);
        *(undefined4 *)((int)RVar4 + 0x34) = pTVar5;
        func_?((undefined4 *)((int)RVar4 + 0x34),pTVar5);
        index = index + 1;
        pLVar3 = (this->fields).materials;
        if (pLVar3 == (List_1_MVMaterial_ *)0x0) goto code_?;
      }
      if (pMVar2 != (MaterialButtonTextureGenerator *)0x0) {
        obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)pMVar2,(MethodInfo *)0x0);
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__UnityEngine__Object);
        }
        UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                  ((Object_1 *)obj,(MethodInfo *)0x0);
        (this->fields)._IsButtonTexturesInitialized_k__BackingField = 1;
        return;
      }
    }
  }
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* IEnumerator GenerateMaterialButtonTextureRoutine() */

IEnumerator *
Assembly-CSharp.dll::MVMaterialRepository::MVMaterialRepository_GenerateMaterialButtonTextureRoutine
          (MVMaterialRepository *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVMaterialRepository___GenerateMaterialButtonTextureRoutine_d__26);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__MVMaterialRepository___GenerateMaterialButtonTextureRoutine_d__26;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  value[1].klass = (Object__Class *)0x0;
  value[2].klass = (Object__Class *)this;
  func_?(value + 2,this);
  return (IEnumerator *)value;
}


/* Void GenerateMaterialButtonTextures() */

void Assembly-CSharp.dll::MVMaterialRepository::MVMaterialRepository_GenerateMaterialButtonTextures
               (MVMaterialRepository *this,MethodInfo *method)

{
  coroutine = (this->fields).generateTexturesRoutine;
  ppIVar1 = &(this->fields).generateTexturesRoutine;
  if (coroutine != (IEnumerator *)0x0) {
    Coroutines::Coroutines_Stop(coroutine,(MethodInfo *)0x0);
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVMaterialRepository___GenerateMaterialButtonTextureRoutine_d__26);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__MVMaterialRepository___GenerateMaterialButtonTextureRoutine_d__26;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  value[1].klass = (Object__Class *)0x0;
  value[2].klass = (Object__Class *)this;
  func_?(value + 2,this);
  *ppIVar1 = (IEnumerator *)value;
  func_?(ppIVar1,value);
  Coroutines::Coroutines_Start(*ppIVar1,(MethodInfo *)0x0);
  return;
}


/* MVMaterial GetMaterial(Byte) */

MVMaterial *
Assembly-CSharp.dll::MVMaterialRepository::MVMaterialRepository_GetMaterial
          (MVMaterialRepository *this,uint8_t materialId,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    func_?();
    cRam_? = '\x01';
  }
  this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
            (this->fields).materials;
  if (this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
    if ((int)(uint)materialId < (this_00->fields)._size) {
      RVar1 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
              RegexCharClass+SingleRange]::
              List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                        (this_00,(uint)materialId,
                         MethodInfo__System__Collections__Generic__List<MVMaterial>__get_Item_int_);
      return (MVMaterial *)RVar1;
    }
    return (this->fields).noMaterial;
  }
  uVar2 = func_?(&stack0xfffffff0);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  pMVar4 = (MVMaterial *)(*pcVar3)();
  return pMVar4;
}


/* PhysicalProperties GetMaterialPhysicalProperties(Byte) */

PhysicalProperties *
Assembly-CSharp.dll::MVMaterialRepository::MVMaterialRepository_GetMaterialPhysicalProperties
          (PhysicalProperties *__return_storage_ptr__,MVMaterialRepository *this,uint8_t materialId,
          MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    func_?();
    cRam_? = '\x01';
  }
  this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
            (this->fields).materials;
  if (this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
    if ((int)(uint)materialId < (this_00->fields)._size) {
      RVar1 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
              RegexCharClass+SingleRange]::
              List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                        (this_00,(uint)materialId,
                         MethodInfo__System__Collections__Generic__List<MVMaterial>__get_Item_int_);
    }
    else {
      RVar1 = (RegexCharClass_SingleRange)(this->fields).noMaterial;
    }
    if (RVar1 != (RegexCharClass_SingleRange)0x0) {
      fVar2 = *(float *)((int)RVar1 + 0x20);
      fVar3 = *(float *)((int)RVar1 + 0x24);
      fVar4 = *(float *)((int)RVar1 + 0x28);
      fVar5 = *(float *)((int)RVar1 + 0x2c);
      __return_storage_ptr__->friction = *(float *)((int)RVar1 + 0x1c);
      __return_storage_ptr__->bouncyness = fVar2;
      __return_storage_ptr__->softness = fVar3;
      __return_storage_ptr__->staticFriction = fVar4;
      __return_storage_ptr__->toughness = fVar5;
      return __return_storage_ptr__;
    }
  }
  uVar6 = func_?(&stack0xfffffff0);
  func_?(uVar6);
  pcVar7 = (code *)swi(3);
  pPVar8 = (PhysicalProperties *)(*pcVar7)();
  return pPVar8;
}


/* Void InitializeMaterials(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::MVMaterialRepository::MVMaterialRepository_InitializeMaterials
               (MVMaterialRepository *this,Dictionary_2_System_Object_System_Object_ *materialList,
               MethodInfo *method)

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
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<System::Object,_System::Object>__Dispose__
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
    func_?(&MethodInfo__System__Collections__Generic__List<MVMaterial>__Add_MVMaterial_);
    func_?(&MethodInfo__System__Collections__Generic__List<MVMaterial>__get_Count__);
    func_?(&TypeInfo__MVMaterial);
    func_?(&TypeInfo__System__Single);
    func_?(&TypeInfo__System__String);
    cRam_? = '\x01';
  }
  pMVar4 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (((((pMVar4 != (MVNetworkGame *)0x0) &&
        (this_00 = (pMVar4->fields).playerContainer, this_00 != (MVPlayerContainer *)0x0)) &&
       (pMVar5 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(this_00,(MethodInfo *)0x0),
       pMVar5 != (MVLocalPlayer *)0x0)) &&
      ((this_01 = (pMVar5->fields)._._SubscriptionRules_k__BackingField,
       this_01 != (SubscriptionRulesWrapper *)0x0 &&
       (bVar6 = MVWorldObject.dll::MV::WorldObject::Subscription::SubscriptionRulesWrapper::
                SubscriptionRulesWrapper_HasBenefit
                          (this_01,SubscriptionBenefit__Enum_FreeBuildingMaterials,(MethodInfo *)0x0
                          ), materialList != (Dictionary_2_System_Object_System_Object_ *)0x0)))) &&
     (this_04 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
                StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
                Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__get_Keys
                          ((Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                            *)materialList,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Keys__
                          ),
     this_04 !=
     (Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
      *)0x0)) {
    pDVar7 = mscorlib.dll::System::Collections::Generic::
             Dictionary`2[TKey,TValue]+ValueCollection[UnityEngine::UIElements::StyleSheets::
             StyleSheetCache+SheetHandleKey,System::Object]::
             Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__GetEnumerator
                       ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                         *)&stack0xffffffa4,
                        (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                         *)this_04,
                        MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___KeyCollection<System::Object,_System::Object>__GetEnumerator__
                       );
    pMVar8 = (MethodInfo *)pDVar7->_currentValue;
    uStack_1 = 1;
    while( true ) {
      bVar9 = mscorlib.dll::System::Collections::Generic::
              Dictionary`2[TKey,TValue]+KeyCollection[TKey,TValue]+Enumerator[System::
              Object,UnityEngine::UIElements::TextureId]::
              Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Object_UnityEngine_UIElements_TextureId__MoveNext
                        ((Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Object_UnityEngine_UIElements_TextureId_
                          *)&pOStack_10,
                         MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                        );
      if (bVar9 == 0) break;
      if (pMVar8 == (MethodInfo *)0x0) goto code_?;
      if (*(Il2CppClass **)(pMVar8->methodPointer + 0x20) !=
          (TypeInfo__System__Byte->_0).element_class) goto code_?;
      func_?();
      pOVar11 = (Object *)func_?();
      TVar12 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
               UIElements::TextureId]::
               Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                         ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                          materialList,pOVar11,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         );
      if (TVar12.m_Index == 0) {
        TVar12.m_Index = 0;
      }
      else {
        bVar13 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                ->_1).naturalAligment;
        if ((*(byte *)(*(int *)TVar12.m_Index + 0xb8) < bVar13) ||
           (*(Dictionary_2_System_Object_System_Object___Class **)
             (*(int *)(*(int *)TVar12.m_Index + 100) + -4 + (uint)bVar13 * 4) !=
            TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>))
        goto code_?;
      }
      pOVar11 = (Object *)func_?();
      if ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)TVar12.m_Index ==
          (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0)
      goto code_?;
      pSStack_14 = (String *)
                   mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                   Object,UnityEngine::UIElements::TextureId]::
                   Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                             ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                              TVar12.m_Index,pOVar11,
                              MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                             );
      if (pSStack_14 != (String *)0x0) {
        TVar15.m_Index = (int32_t)(String *)0x0;
        if (*(String__Class **)pSStack_14 == TypeInfo__System__String) {
          TVar15 = (TextureId)pSStack_14;
        }
        pSStack_14 = (String *)TVar15.m_Index;
        if ((String *)TVar15.m_Index == (String *)0x0) goto code_?;
      }
      pOVar11 = (Object *)func_?();
      pSStack_16 = (String *)
                   mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                   Object,UnityEngine::UIElements::TextureId]::
                   Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                             ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                              TVar12.m_Index,pOVar11,
                              MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                             );
      if (pSStack_16 != (String *)0x0) {
        TVar15.m_Index = (int32_t)(String *)0x0;
        if (*(String__Class **)pSStack_16 == TypeInfo__System__String) {
          TVar15 = (TextureId)pSStack_16;
        }
        pSStack_16 = (String *)TVar15.m_Index;
        if ((String *)TVar15.m_Index == (String *)0x0) goto code_?;
      }
      pOVar11 = (Object *)func_?();
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
      UIElements::TextureId]::Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)TVar12.m_Index,
                 pOVar11,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                );
      pOVar11 = (Object *)func_?();
      TVar15 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
               UIElements::TextureId]::
               Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                         (TVar12.m_Index,pOVar11,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         );
      if (TVar15.m_Index == 0) goto code_?;
      if (*(Il2CppClass **)(*(int *)TVar15.m_Index + 0x20) !=
          (TypeInfo__System__Int32->_0).element_class) goto code_?;
      pMVar17 = (MaterialSound__Enum *)func_?();
      materialSound = *pMVar17;
      pOVar11 = (Object *)func_?();
      TVar15 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
               UIElements::TextureId]::
               Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                         (TVar12.m_Index,pOVar11,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         );
      if (TVar15.m_Index == 0) goto code_?;
      if (*(Il2CppClass **)(*(int *)TVar15.m_Index + 0x20) !=
          (TypeInfo__System__Int32->_0).element_class) goto code_?;
      pAVar18 = (AvatarModifierPackageType__Enum *)func_?();
      modifierPackageType = *pAVar18;
      pOVar11 = (Object *)func_?();
      TVar15 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
               UIElements::TextureId]::
               Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                         (TVar12.m_Index,pOVar11,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         );
      if (TVar15.m_Index == 0) goto code_?;
      if (*(Il2CppClass **)(*(int *)TVar15.m_Index + 0x20) !=
          (TypeInfo__System__Int32->_0).element_class) goto code_?;
      piVar19 = (int32_t *)func_?();
      unlockPriceGold = *piVar19;
      if (bVar6 == 0) {
        pOVar11 = (Object *)func_?();
        TVar15 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                 ::UIElements::TextureId]::
                 Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                           (TVar12.m_Index,pOVar11,
                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                           );
        if (TVar15.m_Index == 0) goto code_?;
        if (*(Il2CppClass **)(*(int *)TVar15.m_Index + 0x20) !=
            (TypeInfo__System__Boolean->_0).element_class) goto code_?;
        pcVar20 = (char *)func_?();
        cVar21 = *pcVar20;
      }
      else {
        cVar21 = '\x01';
      }
      pOVar11 = (Object *)func_?();
      pMVar8 = 
      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
      ;
      TVar12 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
               UIElements::TextureId]::
               Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                         (TVar12.m_Index,pOVar11,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         );
      if (TVar12.m_Index == 0) goto code_?;
      iVar22 = func_?();
      if (iVar22 == 0) goto code_?;
      uVar23 = *(uint *)(iVar22 + 0xc);
      if (uVar23 == 0) goto code_?;
      if (uVar23 < 2) goto code_?;
      height = *(Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                 **)(iVar22 + 0x14);
      if (uVar23 < 3) goto code_?;
      bearingX = *(float *)(iVar22 + 0x18);
      if (uVar23 < 4) goto code_?;
      bearingY = *(float *)(iVar22 + 0x1c);
      if (uVar23 < 5) goto code_?;
      advance = *(float *)(iVar22 + 0x20);
      fVar24 = 0.0;
      UnityEngine.TextCoreFontEngineModule.dll::UnityEngine::TextCore::GlyphMetrics::
      GlyphMetrics__ctor((GlyphMetrics *)&stack0xffffff78,*(float *)(iVar22 + 0x10),(float)height,
                         bearingX,bearingY,advance,(MethodInfo *)0x0);
      this_02 = (this->fields).materials;
      if (this_02 == (List_1_MVMaterial_ *)0x0) goto code_?;
      materialId = (this_02->fields)._size;
      in_stack_25 = (MethodInfo *)&UNK_?;
      this_05 = (MVMaterial *)func_?();
      physicalProperties.bouncyness = bearingX;
      physicalProperties.friction = (float)height;
      physicalProperties.softness = bearingY;
      physicalProperties.staticFriction = advance;
      physicalProperties.toughness = fVar24;
      MVMaterial::MVMaterial__ctor_3
                (this_05,materialId,pSStack_14,pSStack_16,physicalProperties,materialSound,
                 modifierPackageType,unlockPriceGold,cVar21 != '\0',
                 (MaterialButtonTextureGenerator *)0x0,(MethodInfo *)0x0);
      mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__Add
                ((List_1_System_Object_ *)this_02,(Object *)this_05,
                 MethodInfo__System__Collections__Generic__List<MVMaterial>__Add_MVMaterial_);
    }
    uStack_1 = 0xffffffff;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)&pOStack_10,
               (ExceptionArgument__Enum)
               MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<System::Object,_System::Object>__Dispose__
               ,in_stack_25);
    uStack_1 = 0xffffffff;
    if (cRam_? == '\0') {
      func_?();
      func_?();
      cRam_? = '\x01';
    }
    this_03 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
              (this->fields).materials;
    if (this_03 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
      if ((this_03->fields)._size < 0x16) {
        RVar26 = (RegexCharClass_SingleRange)(this->fields).noMaterial;
      }
      else {
        RVar26 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions
                 ::RegexCharClass+SingleRange]::
                 List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                           (this_03,0x15,
                            MethodInfo__System__Collections__Generic__List<MVMaterial>__get_Item_int_
                           );
      }
      if (RVar26 != (RegexCharClass_SingleRange)0x0) {
        if ((*(float *)((int)RVar26 + 0x2c) == _UNK_?) &&
           (*(char *)((int)RVar26 + 0xc) != '\0')) {
          MVMaterialRepository_GenerateMaterialButtonTextures(this,(MethodInfo *)0x0);
          MVGameControllerBase::MVGameControllerBase_RegisterOverrideMaterials((MethodInfo *)0x0);
          *unaff_FS_OFFSET = uStack_3;
          return;
        }
        func_?();
        this_06 = (Exception *)func_?();
        pMVar8 = (MethodInfo *)0x0;
        message = (String *)func_?();
        mscorlib.dll::System::Exception::Exception__ctor_1(this_06,message,pMVar8);
        func_?();
        func_?();
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
code_?:
  func_?();
code_?:
  func_?();
code_?:
  func_?();
code_?:
  func_?();
code_?:
  func_?();
code_?:
  func_?();
  func_?();
  pcVar27 = (code *)swi(3);
  (*pcVar27)();
  return;
}


/* Boolean IsMaterialUnlocked(Byte[]) */

bool Assembly-CSharp.dll::MVMaterialRepository::MVMaterialRepository_IsMaterialUnlocked
               (MVMaterialRepository *this,Byte__Array *mats,MethodInfo *method)

{
  if (mats != (Byte__Array *)0x0) {
    for (uVar1 = 0; (int)uVar1 < (int)mats->max_length; uVar1 = uVar1 + 1) {
      if (mats->max_length <= uVar1) goto code_?;
      bVar2 = mats->vector[uVar1];
      if (cRam_? == '\0') {
        func_?(&MethodInfo__System__Collections__Generic__List<MVMaterial>__get_Count__);
        func_?(&MethodInfo__System__Collections__Generic__List<MVMaterial>__get_Item_int_);
        cRam_? = '\x01';
      }
      this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                (this->fields).materials;
      if (this_00 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
code_?:
        func_?();
code_?:
        func_?();
        pcVar3 = (code *)swi(3);
        bVar4 = (*pcVar3)();
        return bVar4;
      }
      if ((int)(uint)bVar2 < (this_00->fields)._size) {
        RVar5 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions
                ::RegexCharClass+SingleRange]::
                List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                          (this_00,(uint)bVar2,
                           MethodInfo__System__Collections__Generic__List<MVMaterial>__get_Item_int_
                          );
      }
      else {
        RVar5 = (RegexCharClass_SingleRange)(this->fields).noMaterial;
      }
      if (RVar5 == (RegexCharClass_SingleRange)0x0) goto code_?;
      if (*(char *)((int)RVar5 + 0xc) == '\0') {
        return 0;
      }
    }
  }
  return 1;
}


/* Boolean IsMaterialUnlocked(Byte) */

bool Assembly-CSharp.dll::MVMaterialRepository::MVMaterialRepository_IsMaterialUnlocked_1
               (MVMaterialRepository *this,uint8_t mat,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    func_?();
    cRam_? = '\x01';
  }
  this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
            (this->fields).materials;
  if (this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
    if ((int)(uint)mat < (this_00->fields)._size) {
      RVar1 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
              RegexCharClass+SingleRange]::
              List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                        (this_00,(uint)mat,
                         MethodInfo__System__Collections__Generic__List<MVMaterial>__get_Item_int_);
    }
    else {
      RVar1 = (RegexCharClass_SingleRange)(this->fields).noMaterial;
    }
    if (RVar1 != (RegexCharClass_SingleRange)0x0) {
      return *(bool *)((int)RVar1 + 0xc);
    }
  }
  uVar2 = func_?(&stack0xfffffff0);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  bVar4 = (*pcVar3)();
  return bVar4;
}


/* Void Reset() */

void Assembly-CSharp.dll::MVMaterialRepository::MVMaterialRepository_Reset
               (MVMaterialRepository *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVMaterialRepository);
    cRam_? = '\x01';
  }
  TypeInfo__MVMaterialRepository->static_fields->instance = (MVMaterialRepository *)0x0;
  func_?(TypeInfo__MVMaterialRepository->static_fields,0);
  return;
}


/* Void SetMaterialPrice(Int32, Int32) */

void Assembly-CSharp.dll::MVMaterialRepository::MVMaterialRepository_SetMaterialPrice
               (MVMaterialRepository *this,int32_t materialID,int32_t materialUnlockPriceGold,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
            (this->fields).materials;
  if (this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
    RVar1 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
            RegexCharClass+SingleRange]::
            List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                      (this_00,materialID,
                       MethodInfo__System__Collections__Generic__List<MVMaterial>__get_Item_int_);
    if (RVar1 != (RegexCharClass_SingleRange)0x0) {
      *(int32_t *)((int)RVar1 + 8) = materialUnlockPriceGold;
      return;
    }
  }
  uVar2 = func_?(&stack0xfffffff0);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void SetMaterialUnlocked(Int32, Boolean) */

void Assembly-CSharp.dll::MVMaterialRepository::MVMaterialRepository_SetMaterialUnlocked
               (MVMaterialRepository *this,int32_t materialId,bool unlocked,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
            (this->fields).materials;
  if (this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
    RVar1 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
            RegexCharClass+SingleRange]::
            List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                      (this_00,materialId,
                       MethodInfo__System__Collections__Generic__List<MVMaterial>__get_Item_int_);
    if (RVar1 != (RegexCharClass_SingleRange)0x0) {
      *(bool *)((int)RVar1 + 0xc) = unlocked;
      return;
    }
  }
  uVar2 = func_?(&stack0xfffffff0);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* MVMaterialRepository() */

void Assembly-CSharp.dll::MVMaterialRepository::MVMaterialRepository__ctor
               (MVMaterialRepository *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__List<MVMaterial>__List__);
    func_?(&TypeInfo__System__Collections__Generic__List<MVMaterial>);
    func_?(&TypeInfo__MVMaterialRepository);
    func_?(&TypeInfo__MVMaterial);
    func_?(&TypeInfo__MVPhysics);
    func_?(&TypeInfo__MaterialDescription);
    cRam_? = '\x01';
  }
  this_00 = (List_1_MVMaterial_ *)
            func_?(TypeInfo__System__Collections__Generic__List<MVMaterial>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_00,
             MethodInfo__System__Collections__Generic__List<MVMaterial>__List__);
  ppLVar1 = &(this->fields).materials;
  *ppLVar1 = this_00;
  func_?(ppLVar1,this_00);
  fVar2 = 0.0;
  pMVar3 = (MethodInfo *)0x0;
  fVar4 = 0.0;
  UnityEngine.TextCoreFontEngineModule.dll::UnityEngine::TextCore::GlyphMetrics::GlyphMetrics__ctor
            ((GlyphMetrics *)&stack0xffffffe4,0.43,0.0,1.0,20.0,0.0,(MethodInfo *)0x0);
  (this->fields).physicalPropertiesDefault.friction = (float)pMVar3;
  (this->fields).physicalPropertiesDefault.bouncyness = 0.0;
  (this->fields).physicalPropertiesDefault.softness = 0.0;
  (this->fields).physicalPropertiesDefault.staticFriction = fVar4;
  (this->fields).physicalPropertiesDefault.toughness = fVar2;
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,pMVar3);
  if (TypeInfo__MVMaterialRepository->static_fields->instance != (MVMaterialRepository *)0x0) {
    return;
  }
  TypeInfo__MVMaterialRepository->static_fields->instance = this;
  func_?();
  if ((TypeInfo__MaterialDescription->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  pMVar5 = TypeInfo__MaterialDescription->static_fields->materialDescriptions;
  if (pMVar5 != (MaterialDescription__Array *)0x0) {
    if (pMVar5->max_length < 0x19) goto code_?;
    pMVar6 = pMVar5->vector[0x18];
    if ((pMVar6 != (MaterialDescription *)0x0) &&
       (pSVar7 = (pMVar6->fields)._Name_k__BackingField, pMVar6 != (MaterialDescription *)0x0)) {
      pMVar3 = (MethodInfo *)(pMVar6->fields)._Description_k__BackingField;
      fVar4 = (this->fields).physicalPropertiesDefault.friction;
      fVar2 = (this->fields).physicalPropertiesDefault.bouncyness;
      pMVar8 = (MVMaterial *)func_?();
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                ((Object *)pMVar8,ExceptionArgument__Enum_obj,pMVar3);
      (pMVar8->fields)._Name_k__BackingField = pSVar7;
      func_?();
      ppSVar9 = &(pMVar8->fields)._Description_k__BackingField;
      *ppSVar9 = (String *)pMVar3;
      puVar10 = &UNK_?;
      func_?();
      (pMVar8->fields)._ModifierPackageType_k__BackingField = 0;
      (pMVar8->fields)._PhysicalProperties_k__BackingField.friction = fVar4;
      (pMVar8->fields)._PhysicalProperties_k__BackingField.bouncyness = fVar2;
      (pMVar8->fields)._PhysicalProperties_k__BackingField.softness = (float)puVar10;
      (pMVar8->fields)._PhysicalProperties_k__BackingField.staticFriction = (float)ppSVar9;
      (pMVar8->fields)._PhysicalProperties_k__BackingField.toughness = (float)pMVar3;
      (pMVar8->fields).unlockPriceGold = 0;
      (pMVar8->fields).isUnlocked = 0;
      MVMaterial::MVMaterial_GenerateCube(pMVar8,0x18,(MethodInfo *)0x0);
      MVar11 = MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0);
      if (MVar11 == MVGameMode__Enum_Play) {
code_?:
        (this->fields).noMaterial = pMVar8;
        func_?();
        if ((TypeInfo__MVPhysics->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        method_00 = TypeInfo__MVMaterial;
        pMVar12 = TypeInfo__MVPhysics->static_fields;
        fVar2 = (pMVar12->airPhysicalProperties).friction;
        fVar13 = (pMVar12->airPhysicalProperties).bouncyness;
        fVar14 = (pMVar12->airPhysicalProperties).softness;
        fVar15 = (pMVar12->airPhysicalProperties).staticFriction;
        fVar4 = (pMVar12->airPhysicalProperties).toughness;
        pMVar8 = (MVMaterial *)func_?();
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                  ((Object *)pMVar8,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
        (pMVar8->fields)._ModifierPackageType_k__BackingField = 0;
        (pMVar8->fields)._PhysicalProperties_k__BackingField.friction = fVar2;
        (pMVar8->fields)._PhysicalProperties_k__BackingField.bouncyness = fVar13;
        (pMVar8->fields)._PhysicalProperties_k__BackingField.softness = fVar14;
        (pMVar8->fields)._PhysicalProperties_k__BackingField.staticFriction = fVar15;
        (pMVar8->fields)._PhysicalProperties_k__BackingField.toughness = fVar4;
        (this->fields).inAirMaterial = pMVar8;
        func_?();
        return;
      }
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      bVar16 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                        ((Object_1 *)0x0,(Object_1 *)0x0,(MethodInfo *)0x0);
      if (bVar16 == 0) goto code_?;
    }
  }
  func_?();
code_?:
  func_?();
  pcVar17 = (code *)swi(3);
  (*pcVar17)();
  return;
}


/* Boolean get_AllowDestructibleMaterialSelection() */

bool Assembly-CSharp.dll::MVMaterialRepository::
     MVMaterialRepository_get_AllowDestructibleMaterialSelection(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVMaterialRepository->static_fields->instance;
  if (pMVar1 != (MVMaterialRepository *)0x0) {
    return (pMVar1->fields).allowDestructibleMaterialSelection;
  }
  uVar2 = func_?(auStack_3);
  func_?(uVar2);
  pcVar4 = (code *)swi(3);
  bVar5 = (*pcVar4)();
  return bVar5;
}


/* Int32 get_MaterialCount() */

int32_t Assembly-CSharp.dll::MVMaterialRepository::MVMaterialRepository_get_MaterialCount
                  (MVMaterialRepository *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    ppMStack_1 = &MethodInfo__System__Collections__Generic__List<MVMaterial>__get_Count__;
    func_?();
    cRam_? = '\x01';
  }
  pLVar2 = (this->fields).materials;
  if (pLVar2 != (List_1_MVMaterial_ *)0x0) {
    return (pLVar2->fields)._size;
  }
  ppMStack_1 = (MethodInfo **)&stack0xfffffffc;
  uVar3 = func_?(auStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  iVar6 = (*pcVar5)();
  return iVar6;
}


/* Void set_AllowDestructibleMaterialSelection(Boolean) */

void Assembly-CSharp.dll::MVMaterialRepository::
     MVMaterialRepository_set_AllowDestructibleMaterialSelection(bool value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    ppMStack_1 = &TypeInfo__MVMaterialRepository;
    func_?();
    cRam_? = '\x01';
  }
  pMVar2 = TypeInfo__MVMaterialRepository->static_fields->instance;
  if (pMVar2 != (MVMaterialRepository *)0x0) {
    (pMVar2->fields).allowDestructibleMaterialSelection = value;
    return;
  }
  ppMStack_1 = (MVMaterialRepository__Class **)&stack0xfffffffc;
  uVar3 = func_?(auStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

