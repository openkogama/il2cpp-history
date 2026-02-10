
/* Void AddMaterial(String, String, String, MaterialSound, AvatarModifierPackageType, Int32,
   Boolean, Single[], MaterialButtonTextureGenerator) */

void Assembly-CSharp.dll::MVMaterialRepository::MVMaterialRepository_AddMaterial
               (MVMaterialRepository *this,String *name,String *description,String *path,
               MaterialSound__Enum materialSound,AvatarModifierPackageType__Enum modifierPackageType
               ,int32_t priceGold,bool isUnlocked,Single__Array *physicalProperties,
               MaterialButtonTextureGenerator *materialButtonTextureGenerator,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<MVMaterial>__Add_MVMaterial_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<MVMaterial>__get_Count__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVMaterial);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).materials;
  if (pLVar1 != (List_1_MVMaterial_ *)0x0) {
    materialId = (pLVar1->fields)._size;
    if (physicalProperties != (Single__Array *)0x0) {
      if (((((int)physicalProperties->max_length != 0) &&
           (fVar2 = physicalProperties->vector[0], 1 < (uint)physicalProperties->max_length)) &&
          (fVar3 = physicalProperties->vector[1], 2 < (uint)physicalProperties->max_length)) &&
         ((fVar4 = physicalProperties->vector[2], 3 < (uint)physicalProperties->max_length &&
          (fVar5 = physicalProperties->vector[3], 4 < (uint)physicalProperties->max_length)))) {
        fVar6 = physicalProperties->vector[4];
        this_00 = (MVMaterial *)FUN_?(TypeInfo__MVMaterial);
        aPStack_7[0].friction = fVar2;
        aPStack_7[0].bouncyness = fVar3;
        aPStack_7[0].softness = fVar4;
        aPStack_7[0].staticFriction = fVar5;
        aPStack_7[0].toughness = fVar6;
        MVMaterial::MVMaterial__ctor_3
                  (this_00,materialId,name,description,aPStack_7,materialSound,modifierPackageType,
                   priceGold,isUnlocked,materialButtonTextureGenerator,(MethodInfo *)0x0);
        FUN_?(pLVar1,this_00);
        return;
      }
      FUN_?();
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Boolean AllMaterialUnlocked() */

bool Assembly-CSharp.dll::MVMaterialRepository::MVMaterialRepository_AllMaterialUnlocked
               (MVMaterialRepository *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVMaterial>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVMaterial>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVMaterial>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<MVMaterial>__GetEnumerator__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<MVMaterial>__get_Count__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  iVar1 = 0;
  pLVar2 = (this->fields).materials;
  if (pLVar2 != (List_1_MVMaterial_ *)0x0) {
    if (iRam_? != 0) {
      uVar3 = (uint)((ulonglong)&uStack_4 >> 0xc);
      puVar5 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar6 = *puVar5;
        LOCK();
        uVar7 = *puVar5;
        if (uVar6 == uVar7) {
          *puVar5 = uVar6 | 1L << (uVar3 & 0x3f);
        }
        UNLOCK();
      } while (uVar6 != uVar7);
    }
    pLStack_8 = (List_1_T_Enumerator_System_Object_ *)
                 ((ulonglong)(uint)(pLVar2->fields)._version << 0x20);
    uStack_9 = 0;
    LStack_10._8_8_ = pLStack_8;
    LStack_10._current = (Object *)0x0;
    uStack_4 = 0;
    pLStack_8 = &LStack_10;
    LStack_10._list = (List_1_System_Object_ *)pLVar2;
    while (bVar11 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]
                   ::List_1_T_Enumerator_System_Object__MoveNext
                             (&LStack_10,
                              MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVMaterial>__MoveNext__
                             ), bVar11 != 0) {
      if (LStack_10._current == (Object *)0x0) goto code_?;
      if (*(char *)((longlong)&LStack_10._current[1].klass + 4) != '\0') {
        iVar1 = iVar1 + 1;
      }
    }
    pLVar2 = (this->fields).materials;
    if (pLVar2 != (List_1_MVMaterial_ *)0x0) {
      return (pLVar2->fields)._size == iVar1;
    }
  }
  FUN_?();
code_?:
  FUN_?();
  FUN_?();
  pcVar12 = (code *)swi(3);
  bVar11 = (*pcVar12)();
  return bVar11;
}


/* Void GenerateMaterialButtonTextures() */

void Assembly-CSharp.dll::MVMaterialRepository::MVMaterialRepository_GenerateMaterialButtonTextures
               (MVMaterialRepository *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<MVMaterial>__get_Count__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<MVMaterial>__get_Item_int_);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MaterialButtonTextureGenerator_MethodInfo__UnityEngine__Object__Instantiate<MaterialButtonTextureGenerator>_MaterialButtonTextureGenerator_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__PrefabPool);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pPVar1 = TypeInfo__PrefabPool->static_fields->instance;
  if (pPVar1 != (PrefabPool *)0x0) {
    pMVar2 = (pPVar1->fields).materialButtonTextureGenerator;
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    pMVar2 = (MaterialButtonTextureGenerator *)
             UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                       ((Object *)pMVar2,
                        MaterialButtonTextureGenerator_MethodInfo__UnityEngine__Object__Instantiate<MaterialButtonTextureGenerator>_MaterialButtonTextureGenerator_
                       );
    pLVar3 = (this->fields).materials;
    uVar4 = 0;
    if (pLVar3 != (List_1_MVMaterial_ *)0x0) {
      lVar5 = 0x20;
      while ((int)uVar4 < (pLVar3->fields)._size) {
        pLVar3 = (this->fields).materials;
        if (pLVar3 == (List_1_MVMaterial_ *)0x0) goto code_?;
        if ((uint)(pLVar3->fields)._size <= uVar4) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                    ((MethodInfo *)0x0);
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pMVar7 = (pLVar3->fields)._items;
        if (pMVar7 == (MVMaterial__Array *)0x0) goto code_?;
        if ((uint)pMVar7->max_length <= uVar4) {
          FUN_?();
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        lVar8 = *(longlong *)((longlong)pMVar7->vector + lVar5 + -0x20);
        if ((lVar8 == 0) || (pMVar2 == (MaterialButtonTextureGenerator *)0x0))
        goto code_?;
        pTVar9 = MaterialButtonTextureGenerator::MaterialButtonTextureGenerator_TakePicture
                           (pMVar2,*(Mesh **)(lVar8 + 0x18),(MethodInfo *)0x0);
        bVar10 = iRam_? != 0;
        *(Texture2D **)(lVar8 + 0x48) = pTVar9;
        if (bVar10) {
          uVar11 = (uint)(lVar8 + 0x48U >> 0xc);
          uVar12 = (ulonglong)((uVar11 & 0x1fffff) >> 6);
          do {
            uVar13 = *(ulonglong *)(uVar12 * 8 + 0xADDR);
            puVar14 = (ulonglong *)(uVar12 * 8 + 0xADDR);
            LOCK();
            bVar10 = uVar13 == *puVar14;
            if (bVar10) {
              *puVar14 = uVar13 | 1L << (uVar11 & 0x3f);
            }
            UNLOCK();
          } while (!bVar10);
        }
        pLVar3 = (this->fields).materials;
        uVar4 = uVar4 + 1;
        lVar5 = lVar5 + 8;
        if (pLVar3 == (List_1_MVMaterial_ *)0x0) goto code_?;
      }
      if (pMVar2 != (MaterialButtonTextureGenerator *)0x0) {
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Component>_UnityEngine__Component_
                       );
          LOCK();
          UNLOCK();
          FUN_?(&
                        UnityEngine__GameObject_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::GameObject>_void__
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pvVar15 = (pMVar2->fields)._._._._.m_CachedPtr;
        if (pvVar15 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)pMVar2,(MethodInfo *)0x0);
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pcVar6 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
          uVar16 = func_?(&UNK_?);
          FUN_?(uVar16,0);
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pcRam_? = pcVar6;
        pvVar15 = (void *)(*pcRam_?)(pvVar15);
        obj = (Object_1 *)
              UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::
              Unmarshal_UnmarshalUnityObject
                        (pvVar15,
                         UnityEngine__GameObject_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::GameObject>_void__
                        );
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
        UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy(obj,0.0,(MethodInfo *)0x0)
        ;
        (this->fields)._IsButtonTexturesInitialized_k__BackingField = 1;
        return;
      }
    }
  }
code_?:
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* MVMaterial GetMaterial(Byte) */

MVMaterial *
Assembly-CSharp.dll::MVMaterialRepository::MVMaterialRepository_GetMaterial
          (MVMaterialRepository *this,uint8_t materialId,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<MVMaterial>__get_Count__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<MVMaterial>__get_Item_int_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).materials;
  if (pLVar1 != (List_1_MVMaterial_ *)0x0) {
    uVar2 = (pLVar1->fields)._size;
    if ((int)uVar2 <= (int)(uint)materialId) {
      return (this->fields).noMaterial;
    }
    if (uVar2 <= materialId) {
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                ((MethodInfo *)0x0);
      pcVar3 = (code *)swi(3);
      pMVar4 = (MVMaterial *)(*pcVar3)();
      return pMVar4;
    }
    pMVar5 = (pLVar1->fields)._items;
    if (pMVar5 != (MVMaterial__Array *)0x0) {
      if ((uint)materialId < (uint)pMVar5->max_length) {
        return pMVar5->vector[materialId];
      }
      FUN_?();
      pcVar3 = (code *)swi(3);
      pMVar4 = (MVMaterial *)(*pcVar3)();
      return pMVar4;
    }
  }
  FUN_?();
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
    FUN_?(&MethodInfo__System__Collections__Generic__List<MVMaterial>__get_Count__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<MVMaterial>__get_Item_int_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).materials;
  if (pLVar1 != (List_1_MVMaterial_ *)0x0) {
    uVar2 = (pLVar1->fields)._size;
    if ((int)(uint)materialId < (int)uVar2) {
      if (uVar2 <= materialId) {
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                  ((MethodInfo *)0x0);
        pcVar3 = (code *)swi(3);
        pPVar4 = (PhysicalProperties *)(*pcVar3)();
        return pPVar4;
      }
      pMVar5 = (pLVar1->fields)._items;
      if (pMVar5 == (MVMaterial__Array *)0x0) goto code_?;
      if ((uint)pMVar5->max_length <= (uint)materialId) {
        FUN_?();
        pcVar3 = (code *)swi(3);
        pPVar4 = (PhysicalProperties *)(*pcVar3)();
        return pPVar4;
      }
      pMVar6 = pMVar5->vector[materialId];
    }
    else {
      pMVar6 = (this->fields).noMaterial;
    }
    if (pMVar6 != (MVMaterial *)0x0) {
      fVar7 = (pMVar6->fields)._PhysicalProperties_k__BackingField.bouncyness;
      fVar8 = (pMVar6->fields)._PhysicalProperties_k__BackingField.softness;
      fVar9 = (pMVar6->fields)._PhysicalProperties_k__BackingField.staticFriction;
      fVar10 = (pMVar6->fields)._PhysicalProperties_k__BackingField.toughness;
      __return_storage_ptr__->friction =
           (pMVar6->fields)._PhysicalProperties_k__BackingField.friction;
      __return_storage_ptr__->bouncyness = fVar7;
      __return_storage_ptr__->softness = fVar8;
      __return_storage_ptr__->staticFriction = fVar9;
      __return_storage_ptr__->toughness = fVar10;
      return __return_storage_ptr__;
    }
  }
code_?:
  FUN_?();
  pcVar3 = (code *)swi(3);
  pPVar4 = (PhysicalProperties *)(*pcVar3)();
  return pPVar4;
}


/* Void InitializeMaterials(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::MVMaterialRepository::MVMaterialRepository_InitializeMaterials
               (MVMaterialRepository *this,Dictionary_2_System_Object_System_Object_ *materialList,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
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
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
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
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<System::Object,_System::Object>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___KeyCollection<System::Object,_System::Object>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<MVMaterial>__Add_MVMaterial_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<MVMaterial>__get_Count__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVMaterial);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Single);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  pDVar2 = materialList;
  if ((((pMVar1 != (MVGameControllerBase *)0x0) &&
       (pMVar3 = (pMVar1->fields).game, pMVar3 != (MVNetworkGame *)0x0)) &&
      (this_00 = (pMVar3->fields).playerContainer, this_00 != (MVPlayerContainer *)0x0)) &&
     ((pMVar4 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(this_00,(MethodInfo *)0x0),
      pMVar4 != (MVLocalPlayer *)0x0 &&
      (this_01 = (pMVar4->fields)._._SubscriptionRules_k__BackingField,
      this_01 != (SubscriptionRulesWrapper *)0x0)))) {
    method = (MethodInfo *)0x0;
    bVar5 = MVWorldObject.dll::MV::WorldObject::Subscription::SubscriptionRulesWrapper::
            SubscriptionRulesWrapper_HasBenefit
                      (this_01,SubscriptionBenefit__Enum_FreeBuildingMaterials,(MethodInfo *)0x0);
    if ((materialList != (Dictionary_2_System_Object_System_Object_ *)0x0) &&
       (pDVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
                  TypeConverterRegistry+ConverterKey,System::Object]::
                  Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object__get_Keys
                            ((Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                              *)materialList,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Keys__
                            ),
       pDVar6 !=
       (Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
        *)0x0)) {
      auStack_7._0_8_ = (pDVar6->fields)._dictionary;
      auStack_7._8_4_ = 0.0;
      auStack_7._12_4_ = 0.0;
      auStack_7._16_8_ = 0;
      if (iRam_? != 0) {
        uVar8 = (uint)((ulonglong)auStack_7 >> 0xc);
        uVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6);
        do {
          uVar10 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
          puVar11 = (ulonglong *)(uVar9 * 8 + 0xADDR);
          LOCK();
          bVar12 = uVar10 == *puVar11;
          if (bVar12) {
            *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
          }
          UNLOCK();
        } while (!bVar12);
      }
      if ((Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *)
          auStack_7._0_8_ ==
          (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *)
          0x0) {
        FUN_?();
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      uStack_14 = (((Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                     *)auStack_7._0_8_)->fields)._version;
      auStack_7._8_8_ = (ulonglong)uStack_14 << 0x20;
      auStack_7._16_8_ = 0;
      auStack_7._4_4_ = (undefined4)((ulonglong)auStack_7._0_8_ >> 0x20);
      fStack_15 = (float)auStack_7._0_4_;
      fStack_16 = (float)auStack_7._4_4_;
      uStack_17 = 0;
      pIStack_18 = (Il2CppType *)0x0;
      uStack_19 = 0;
      pfStack_20 = &fStack_15;
      while (lVar21 = CONCAT44(fStack_16,fStack_15), lVar21 != 0) {
        if (uStack_14 != *(uint *)(lVar21 + 0x2c)) goto code_?;
        do {
          if (lVar21 == 0) goto code_?;
          if (*(uint *)(lVar21 + 0x20) <= uStack_17) {
            uStack_17 = *(int *)(lVar21 + 0x20) + 1;
            pIStack_18 = (Il2CppType *)0x0;
            method = (MethodInfo *)0x0;
            pMVar22 = MVMaterialRepository_GetMaterial(this,0x15,(MethodInfo *)0x0);
            if (pMVar22 != (MVMaterial *)0x0) {
              auStack_7._0_4_ = (pMVar22->fields)._PhysicalProperties_k__BackingField.friction;
              auStack_7._4_4_ = (pMVar22->fields)._PhysicalProperties_k__BackingField.bouncyness;
              auStack_7._8_4_ = (pMVar22->fields)._PhysicalProperties_k__BackingField.softness;
              auStack_7._12_4_ =
                   (pMVar22->fields)._PhysicalProperties_k__BackingField.staticFriction;
              if (((pMVar22->fields)._PhysicalProperties_k__BackingField.toughness == 0.0) &&
                 ((pMVar22->fields).isUnlocked != 0)) {
                MVMaterialRepository_GenerateMaterialButtonTextures(this,(MethodInfo *)0x0);
                if (cRam_? == '\0') {
                  FUN_?(&TypeInfo__UnityEngine__Application);
                  LOCK();
                  UNLOCK();
                  FUN_?(&TypeInfo__MVGameControllerBase);
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                if (*(int *)&(TypeInfo__UnityEngine__Application->_1).field_0x1c == 0) {
                  FUN_?();
                }
                return;
              }
              uVar23 = func_?(&TypeInfo__System__Exception);
              this_02 = (Exception *)func_?(uVar23);
              pSVar24 = (String *)func_?(&StringLiteral_Default_material_is_invalid);
              mscorlib.dll::System::Exception::Exception__ctor_1(this_02,pSVar24,(MethodInfo *)0x0);
              uVar23 = func_?(&
                                           MethodInfo__MVMaterialRepository__InitializeMaterials_System__Collections__Generic__Dictionary<System::Object,_System::Object>_
                                          );
              FUN_?(this_02,uVar23);
              pcVar13 = (code *)swi(3);
              (*pcVar13)();
              return;
            }
            goto code_?;
          }
          method = *(MethodInfo **)(lVar21 + 0x18);
          lVar25 = (longlong)(int)uStack_17;
          uVar8 = uStack_17 + 1;
          if ((Dictionary_2_System_Object_System_Object___Class *)method ==
              (Dictionary_2_System_Object_System_Object___Class *)0x0) goto code_?;
          bVar12 = *(uint *)&(((Dictionary_2_System_Object_System_Object___Class *)method)->_0).
                             namespaze <= uStack_17;
          uStack_17 = uVar8;
          if (bVar12) goto code_?;
        } while (*(int *)((longlong)
                          &(((Dictionary_2_System_Object_System_Object___Class *)method)->_0).
                           byval_arg + lVar25 * 0x18) < 0);
        pIStack_18 = *(Il2CppType **)
                      ((longlong)
                       &(((Dictionary_2_System_Object_System_Object___Class *)method)->_0).byval_arg
                      + lVar25 * 0x18 + 8);
        uVar26 = func_?(&pIStack_18);
        if (pIStack_18 == (Il2CppType *)0x0) goto code_?;
        method = (MethodInfo *)pDRam0000000182dc2ee8;
        if (*(Il2CppGenericMethod **)((longlong)(pIStack_18->data).dummy + 0x40) !=
            ((_union_155 *)&(pDRam0000000182dc2ee8->_0).element_class)->genericMethod)
        goto code_?;
        auStackX_20[0] = *(undefined1 *)&pIStack_18[1].data;
        pOVar27 = (Object *)FUN_?(pDRam0000000182dc2ee8,auStackX_20);
        method = 
        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
        ;
        pDVar2 = (Dictionary_2_System_Object_System_Object_ *)
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                  Object]::Dictionary_2_System_Object_System_Object__get_Item
                            (materialList,pOVar27,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                            );
        if (pDVar2 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
          method = (MethodInfo *)pDVar2->klass;
          bVar28 = (
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                  ->_1).naturalAligment;
          if (((((Dictionary_2_System_Object_System_Object___Class *)method)->_1).naturalAligment <
               bVar28) ||
             ((Dictionary_2_System_Object_System_Object___Class *)
              (((Dictionary_2_System_Object_System_Object___Class *)method)->_1).typeHierarchy
              [(ulonglong)bVar28 - 1] !=
              TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>))
          goto code_?;
        }
        auStackX_20[0] = 0x37;
        pOVar27 = (Object *)FUN_?(pDRam0000000182dc2ee8,auStackX_20);
        if (pDVar2 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
        method = 
        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
        ;
        pSVar29 = (String *)
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                  Object]::Dictionary_2_System_Object_System_Object__get_Item
                            (pDVar2,pOVar27,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                            );
        pSVar24 = (String *)0x0;
        if (pSVar29 != (String *)0x0) {
          if (pSVar29->klass == pSRam0000000182dc2f60) {
            pSVar24 = pSVar29;
          }
          if (pSVar24 == (String *)0x0) goto code_?;
        }
        auStackX_20[0] = 0x38;
        pOVar27 = (Object *)FUN_?(pDRam0000000182dc2ee8,auStackX_20);
        method = 
        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
        ;
        pSVar30 = (String *)
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                  Object]::Dictionary_2_System_Object_System_Object__get_Item
                            (pDVar2,pOVar27,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                            );
        pSVar29 = (String *)0x0;
        if (pSVar30 != (String *)0x0) {
          if (pSVar30->klass == pSRam0000000182dc2f60) {
            pSVar29 = pSVar30;
          }
          if (pSVar29 == (String *)0x0) goto code_?;
        }
        auStackX_20[0] = 0x39;
        pOVar27 = (Object *)FUN_?(pDRam0000000182dc2ee8,auStackX_20);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__get_Item
                  (pDVar2,pOVar27,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                  );
        auStackX_20[0] = 0x3a;
        pOVar27 = (Object *)FUN_?(pDRam0000000182dc2ee8,auStackX_20);
        pOVar27 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                  Object]::Dictionary_2_System_Object_System_Object__get_Item
                            (pDVar2,pOVar27,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                            );
        method = (MethodInfo *)pDRam0000000182dc2f18;
        if (pOVar27 == (Object *)0x0) goto code_?;
        if ((pOVar27->klass->_0).element_class !=
            (Il2CppClass *)((_union_155 *)&(pDRam0000000182dc2f18->_0).element_class)->genericMethod
           ) goto code_?;
        materialSound = *(MaterialSound__Enum *)&pOVar27[1].klass;
        auStackX_20[0] = 0x3b;
        pOVar27 = (Object *)FUN_?(pDRam0000000182dc2ee8,auStackX_20);
        pOVar27 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                  Object]::Dictionary_2_System_Object_System_Object__get_Item
                            (pDVar2,pOVar27,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                            );
        method = (MethodInfo *)pDRam0000000182dc2f18;
        if (pOVar27 == (Object *)0x0) goto code_?;
        if ((pOVar27->klass->_0).element_class !=
            (Il2CppClass *)((_union_155 *)&(pDRam0000000182dc2f18->_0).element_class)->genericMethod
           ) goto code_?;
        modifierPackageType = *(AvatarModifierPackageType__Enum *)&pOVar27[1].klass;
        auStackX_20[0] = 0x3d;
        pOVar27 = (Object *)FUN_?(pDRam0000000182dc2ee8,auStackX_20);
        pOVar27 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                  Object]::Dictionary_2_System_Object_System_Object__get_Item
                            (pDVar2,pOVar27,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                            );
        method = (MethodInfo *)pDRam0000000182dc2f18;
        if (pOVar27 == (Object *)0x0) goto code_?;
        if ((pOVar27->klass->_0).element_class !=
            (Il2CppClass *)((_union_155 *)&(pDRam0000000182dc2f18->_0).element_class)->genericMethod
           ) goto code_?;
        unlockPriceGold = *(int32_t *)&pOVar27[1].klass;
        if (bVar5 == 0) {
          auStackX_20[0] = 0x3e;
          pOVar27 = (Object *)FUN_?(pDRam0000000182dc2ee8,auStackX_20);
          pOVar27 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                    Object]::Dictionary_2_System_Object_System_Object__get_Item
                              (pDVar2,pOVar27,
                               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                              );
          method = (MethodInfo *)pDRam0000000182dc2ef8;
          if (pOVar27 == (Object *)0x0) goto code_?;
          if ((pOVar27->klass->_0).element_class !=
              (Il2CppClass *)
              ((_union_155 *)&(pDRam0000000182dc2ef8->_0).element_class)->genericMethod)
          goto code_?;
          cVar31 = *(char *)&pOVar27[1].klass;
        }
        else {
          cVar31 = '\x01';
        }
        auStackX_20[0] = 0x73;
        pOVar27 = (Object *)FUN_?(pDRam0000000182dc2ee8,auStackX_20);
        method = 
        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
        ;
        pDVar2 = (Dictionary_2_System_Object_System_Object_ *)
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                  Object]::Dictionary_2_System_Object_System_Object__get_Item
                            (pDVar2,pOVar27,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                            );
        unaff_RDI = TypeInfo__System__Single;
        if (pDVar2 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
        lVar21 = FUN_?(pDVar2,TypeInfo__System__Single);
        if (lVar21 == 0) goto code_?;
        if (*(int *)(lVar21 + 0x18) == 0) goto code_?;
        if (*(uint *)(lVar21 + 0x18) < 2) goto code_?;
        if (*(uint *)(lVar21 + 0x18) < 3) goto code_?;
        if (*(uint *)(lVar21 + 0x18) < 4) goto code_?;
        if (*(uint *)(lVar21 + 0x18) < 5) goto code_?;
        uVar26 = *(undefined4 *)(lVar21 + 0x30);
        unaff_RDI = (Single__Array__Class *)(this->fields).materials;
        if (unaff_RDI == (Single__Array__Class *)0x0) goto code_?;
        materialId = *(int32_t *)&(unaff_RDI->_0).namespaze;
        uStack_32 = *(undefined4 *)(lVar21 + 0x20);
        uStack_33 = *(undefined4 *)(lVar21 + 0x24);
        uStack_34 = *(undefined4 *)(lVar21 + 0x28);
        uStack_35 = *(undefined4 *)(lVar21 + 0x2c);
        pDVar2 = (Dictionary_2_System_Object_System_Object_ *)FUN_?(TypeInfo__MVMaterial);
        auStack_7._0_8_ = CONCAT44(uStack_33,uStack_32);
        auStack_7._8_8_ = CONCAT44(uStack_35,uStack_34);
        auStack_7._16_4_ = uVar26;
        MVMaterial::MVMaterial__ctor_3
                  ((MVMaterial *)pDVar2,materialId,pSVar24,pSVar29,(PhysicalProperties *)auStack_7
                   ,materialSound,modifierPackageType,unlockPriceGold,cVar31 != '\0',
                   (MaterialButtonTextureGenerator *)0x0,(MethodInfo *)0x0);
        FUN_?(unaff_RDI,pDVar2);
      }
      goto code_?;
    }
  }
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  pOVar27 = (Object *)FUN_?(pDVar2,unaff_RDI);
code_?:
  FUN_?(pOVar27,method);
code_?:
  pOVar27 = (Object *)FUN_?();
code_?:
  FUN_?(pOVar27,method);
code_?:
  pOVar27 = (Object *)FUN_?();
code_?:
  FUN_?(pOVar27,method);
code_?:
  pOVar27 = (Object *)FUN_?();
code_?:
  FUN_?(pOVar27,method);
code_?:
  pSVar30 = (String *)FUN_?();
code_?:
  pSVar29 = (String *)FUN_?(pSVar30);
code_?:
  FUN_?(pSVar29);
code_?:
  FUN_?();
code_?:
  uVar26 = FUN_?();
code_?:
  FUN_?(uVar26,method);
code_?:
  FUN_?();
  uVar8 = uStack_17;
code_?:
  uStack_17 = uVar8;
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
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* Boolean IsMaterialUnlocked(Byte[]) */

bool Assembly-CSharp.dll::MVMaterialRepository::MVMaterialRepository_IsMaterialUnlocked
               (MVMaterialRepository *this,Byte__Array *mats,MethodInfo *method)

{
  if (mats != (Byte__Array *)0x0) {
    puVar1 = mats->vector;
    for (uVar2 = 0; (int)uVar2 < (int)mats->max_length; uVar2 = uVar2 + 1) {
      if ((uint)mats->max_length <= uVar2) {
        FUN_?();
        pcVar3 = (code *)swi(3);
        bVar4 = (*pcVar3)();
        return bVar4;
      }
      pMVar5 = MVMaterialRepository_GetMaterial(this,*puVar1,(MethodInfo *)0x0);
      if (pMVar5 == (MVMaterial *)0x0) {
        FUN_?();
        pcVar3 = (code *)swi(3);
        bVar4 = (*pcVar3)();
        return bVar4;
      }
      if ((pMVar5->fields).isUnlocked == 0) {
        return 0;
      }
      puVar1 = puVar1 + 1;
    }
  }
  return 1;
}


/* Boolean IsMaterialUnlocked(Byte) */

bool Assembly-CSharp.dll::MVMaterialRepository::MVMaterialRepository_IsMaterialUnlocked_1
               (MVMaterialRepository *this,uint8_t mat,MethodInfo *method)

{
  pMVar1 = MVMaterialRepository_GetMaterial(this,mat,(MethodInfo *)0x0);
  if (pMVar1 != (MVMaterial *)0x0) {
    return (pMVar1->fields).isUnlocked;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  bVar3 = (*pcVar2)();
  return bVar3;
}


/* Void Reset() */

void Assembly-CSharp.dll::MVMaterialRepository::MVMaterialRepository_Reset
               (MVMaterialRepository *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVMaterialRepository);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  TypeInfo__MVMaterialRepository->static_fields->instance = (MVMaterialRepository *)0x0;
  if (iRam_? != 0) {
    uVar1 = (uint)((ulonglong)TypeInfo__MVMaterialRepository->static_fields >> 0xc);
    puVar2 = (ulonglong *)((ulonglong)((uVar1 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar3 = *puVar2;
      LOCK();
      uVar4 = *puVar2;
      if (uVar3 == uVar4) {
        *puVar2 = uVar3 | 1L << (uVar1 & 0x3f);
      }
      UNLOCK();
    } while (uVar3 != uVar4);
  }
  return;
}


/* Void SetMaterialPrice(Int32, Int32) */

void Assembly-CSharp.dll::MVMaterialRepository::MVMaterialRepository_SetMaterialPrice
               (MVMaterialRepository *this,int32_t materialID,int32_t materialUnlockPriceGold,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).materials;
  if (pLVar1 != (List_1_MVMaterial_ *)0x0) {
    if ((uint)(pLVar1->fields)._size <= (uint)materialID) {
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                ((MethodInfo *)0x0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pMVar3 = (pLVar1->fields)._items;
    if (pMVar3 != (MVMaterial__Array *)0x0) {
      if ((uint)pMVar3->max_length <= (uint)materialID) {
        FUN_?();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (pMVar3->vector[materialID] != (MVMaterial *)0x0) {
        (pMVar3->vector[materialID]->fields).unlockPriceGold = materialUnlockPriceGold;
        return;
      }
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetMaterialUnlocked(Int32, Boolean) */

void Assembly-CSharp.dll::MVMaterialRepository::MVMaterialRepository_SetMaterialUnlocked
               (MVMaterialRepository *this,int32_t materialId,bool unlocked,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).materials;
  if (pLVar1 != (List_1_MVMaterial_ *)0x0) {
    if ((uint)(pLVar1->fields)._size <= (uint)materialId) {
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                ((MethodInfo *)0x0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pMVar3 = (pLVar1->fields)._items;
    if (pMVar3 != (MVMaterial__Array *)0x0) {
      if ((uint)pMVar3->max_length <= (uint)materialId) {
        FUN_?();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (pMVar3->vector[materialId] != (MVMaterial *)0x0) {
        (pMVar3->vector[materialId]->fields).isUnlocked = unlocked;
        return;
      }
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* MVMaterialRepository() */

void Assembly-CSharp.dll::MVMaterialRepository::MVMaterialRepository__ctor
               (MVMaterialRepository *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<MVMaterial>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<MVMaterial>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVMaterialRepository);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVMaterial);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVPhysics);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MaterialDescription);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (List_1_MVMaterial_ *)
            FUN_?(TypeInfo__System__Collections__Generic__List<MVMaterial>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_00,
             MethodInfo__System__Collections__Generic__List<MVMaterial>__List__);
  bVar1 = iRam_? != 0;
  (this->fields).materials = this_00;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).materials >> 0xc);
    uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
    do {
      uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
      puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  uVar6 = _UNK_?;
  uVar7 = _UNK_?;
  (this->fields).physicalPropertiesDefault.friction = (float)_UNK_?;
  uVar8 = _UNK_?;
  (this->fields).physicalPropertiesDefault.bouncyness = (float)uVar7;
  _UNK_? = (undefined4)uVar6;
  _UNK_? = SUB84(uVar6,4);
  uVar7 = _UNK_?;
  (this->fields).physicalPropertiesDefault.softness = (float)_UNK_?;
  _UNK_? = uVar8;
  (this->fields).physicalPropertiesDefault.staticFriction = (float)uVar7;
  (this->fields).physicalPropertiesDefault.toughness = 0.0;
  if (TypeInfo__MVMaterialRepository->static_fields->instance != (MVMaterialRepository *)0x0) {
    return;
  }
  TypeInfo__MVMaterialRepository->static_fields->instance = this;
  if (iRam_? != 0) {
    uVar2 = (uint)((ulonglong)TypeInfo__MVMaterialRepository->static_fields >> 0xc);
    uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
    do {
      uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
      puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  if (*(int *)&(TypeInfo__MaterialDescription->_1).field_0x1c == 0) {
    FUN_?();
  }
  pMVar9 = TypeInfo__MaterialDescription->static_fields->materialDescriptions;
  if (pMVar9 != (MaterialDescription__Array *)0x0) {
    if ((uint)pMVar9->max_length < 0x19) {
      FUN_?();
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    if (pMVar9->vector[0x18] != (MaterialDescription *)0x0) {
      name = (pMVar9->vector[0x18]->fields)._Name_k__BackingField;
      pMVar11 = TypeInfo__MaterialDescription->static_fields->materialDescriptions->vector[0x18];
      if (pMVar11 != (MaterialDescription *)0x0) {
        description = (pMVar11->fields)._Description_k__BackingField;
        fVar12 = (this->fields).physicalPropertiesDefault.toughness;
        uVar6._0_4_ = (this->fields).physicalPropertiesDefault.friction;
        uVar6._4_4_ = (this->fields).physicalPropertiesDefault.bouncyness;
        uVar8._0_4_ = (this->fields).physicalPropertiesDefault.softness;
        uVar8._4_4_ = (this->fields).physicalPropertiesDefault.staticFriction;
        pMVar13 = (MVMaterial *)FUN_?(TypeInfo__MVMaterial);
        aPStack_14[0]._0_8_ = uVar6;
        aPStack_14[0]._8_8_ = uVar8;
        aPStack_14[0].toughness = fVar12;
        MVMaterial::MVMaterial__ctor_3
                  (pMVar13,0x18,name,description,aPStack_14,MaterialSound__Enum_None,
                   AvatarModifierPackageType__Enum_None,0,0,(MaterialButtonTextureGenerator *)0x0,
                   (MethodInfo *)0x0);
        bVar1 = iRam_? != 0;
        (this->fields).noMaterial = pMVar13;
        if (bVar1) {
          uVar2 = (uint)((ulonglong)&(this->fields).noMaterial >> 0xc);
          uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
          do {
            uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
            puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
            LOCK();
            bVar1 = uVar4 == *puVar5;
            if (bVar1) {
              *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
            }
            UNLOCK();
          } while (!bVar1);
        }
        if (*(int *)&(TypeInfo__MVPhysics->_1).field_0x1c == 0) {
          FUN_?(TypeInfo__MVPhysics);
        }
        pMVar15 = TypeInfo__MVPhysics->static_fields;
        fVar16 = (pMVar15->airPhysicalProperties).friction;
        fVar17 = (pMVar15->airPhysicalProperties).bouncyness;
        fVar18 = (pMVar15->airPhysicalProperties).softness;
        fVar19 = (pMVar15->airPhysicalProperties).staticFriction;
        fVar12 = (pMVar15->airPhysicalProperties).toughness;
        pMVar13 = (MVMaterial *)FUN_?(TypeInfo__MVMaterial);
        bVar1 = iRam_? == 0;
        (pMVar13->fields)._PhysicalProperties_k__BackingField.friction = fVar16;
        (pMVar13->fields)._PhysicalProperties_k__BackingField.bouncyness = fVar17;
        (pMVar13->fields)._PhysicalProperties_k__BackingField.softness = fVar18;
        (pMVar13->fields)._PhysicalProperties_k__BackingField.staticFriction = fVar19;
        (pMVar13->fields)._ModifierPackageType_k__BackingField = 0;
        (pMVar13->fields)._PhysicalProperties_k__BackingField.toughness = fVar12;
        (this->fields).inAirMaterial = pMVar13;
        if (bVar1) {
          return;
        }
        uVar2 = (uint)((ulonglong)&(this->fields).inAirMaterial >> 0xc);
        uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
        do {
          uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
          puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
          LOCK();
          bVar1 = uVar4 == *puVar5;
          if (bVar1) {
            *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
          }
          UNLOCK();
        } while (!bVar1);
        return;
      }
    }
  }
  FUN_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Boolean get_AllowDestructibleMaterialSelection() */

bool Assembly-CSharp.dll::MVMaterialRepository::
     MVMaterialRepository_get_AllowDestructibleMaterialSelection(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVMaterialRepository);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVMaterialRepository->static_fields->instance;
  if (pMVar1 != (MVMaterialRepository *)0x0) {
    return (pMVar1->fields).allowDestructibleMaterialSelection;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  bVar3 = (*pcVar2)();
  return bVar3;
}


/* Int32 get_MaterialCount() */

int32_t Assembly-CSharp.dll::MVMaterialRepository::MVMaterialRepository_get_MaterialCount
                  (MVMaterialRepository *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<MVMaterial>__get_Count__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).materials;
  if (pLVar1 != (List_1_MVMaterial_ *)0x0) {
    return (pLVar1->fields)._size;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  iVar3 = (*pcVar2)();
  return iVar3;
}


/* Void set_AllowDestructibleMaterialSelection(Boolean) */

void Assembly-CSharp.dll::MVMaterialRepository::
     MVMaterialRepository_set_AllowDestructibleMaterialSelection(bool value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVMaterialRepository);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVMaterialRepository->static_fields->instance;
  if (pMVar1 != (MVMaterialRepository *)0x0) {
    (pMVar1->fields).allowDestructibleMaterialSelection = value;
    return;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

