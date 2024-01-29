
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
      if ((((physicalProperties->max_length != 0) && (1 < physicalProperties->max_length)) &&
          (2 < physicalProperties->max_length)) &&
         ((3 < physicalProperties->max_length && (4 < physicalProperties->max_length)))) {
        fVar1 = 0.0;
        fVar2 = 0.0;
        fVar3 = 0.0;
        fVar4 = 0.0;
        UnityEngine.TextCoreFontEngineModule.dll::UnityEngine::TextCore::GlyphMetrics::
        GlyphMetrics__ctor((GlyphMetrics *)&stack0xffffffe8,physicalProperties->vector[0],
                           physicalProperties->vector[1],physicalProperties->vector[2],
                           physicalProperties->vector[3],physicalProperties->vector[4],
                           (MethodInfo *)0x0);
        this_01 = (MVMaterial *)func_?(TypeInfo__MVMaterial);
        physicalProperties_00.bouncyness = fVar2;
        physicalProperties_00.friction = fVar1;
        physicalProperties_00.softness = fVar3;
        physicalProperties_00.staticFriction = fVar4;
        physicalProperties_00.toughness = 0.0;
        MVMaterial::MVMaterial__ctor_1
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
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
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
  LStack_8._list = (List_1_System_Object_ *)0x0;
  LStack_8._index = 0;
  LStack_8._version = 0;
  LStack_8._current = (Object *)0x0;
  method_00 = (MethodInfo *)(this->fields).materials;
  if (method_00 != (MethodInfo *)0x0) {
    pLVar9 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
             RegexCharClass+SingleRange]::
             List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                       (&LStack_10,
                        (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                        method_00,
                        MethodInfo__System__Collections__Generic__List<MVMaterial>__GetEnumerator__)
    ;
    LStack_8._list = (List_1_System_Object_ *)pLVar9->_list;
    LStack_8._index = pLVar9->_index;
    LStack_8._version = pLVar9->_version;
    LStack_8._current = *(Object **)&pLVar9->_current;
    LStack_10._version = 0;
    uStack_1 = 1;
    LStack_10._current = (RegexCharClass_SingleRange)&LStack_8;
    while( true ) {
      bVar11 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
              List_1_T_Enumerator_System_Object__MoveNext
                        (&LStack_8,
                         MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVMaterial>__MoveNext__
                        );
      if (bVar11 == 0) break;
      if ((RegexCharClass_SingleRange)LStack_8._current == (RegexCharClass_SingleRange)0x0)
      goto code_?;
      if (*(char *)((int)LStack_8._current + 0xc) != '\0') {
        iVar6 = iVar6 + 1;
        iStack_7 = iVar6;
      }
    }
    uStack_1 = 0xffffffff;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
              ((Object *)&LStack_8,
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


/* MVMaterial GetMaterial(Byte) */

MVMaterial *
Assembly-CSharp.dll::MVMaterialRepository::MVMaterialRepository_GetMaterial
          (MVMaterialRepository *this,uint8_t materialId,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__List<MVMaterial>__get_Count__);
    func_?(&MethodInfo__System__Collections__Generic__List<MVMaterial>__get_Item_int_);
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
  func_?();
  pcVar2 = (code *)swi(3);
  pMVar3 = (MVMaterial *)(*pcVar2)();
  return pMVar3;
}


/* PhysicalProperties GetMaterialPhysicalProperties(Byte) */

PhysicalProperties *
Assembly-CSharp.dll::MVMaterialRepository::MVMaterialRepository_GetMaterialPhysicalProperties
          (PhysicalProperties *__return_storage_ptr__,MVMaterialRepository *this,uint8_t materialId,
          MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__List<MVMaterial>__get_Count__);
    func_?(&MethodInfo__System__Collections__Generic__List<MVMaterial>__get_Item_int_);
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
  func_?();
  pcVar6 = (code *)swi(3);
  pPVar7 = (PhysicalProperties *)(*pcVar6)();
  return pPVar7;
}


/* Boolean IsMaterialUnlocked(Byte[]) */

bool Assembly-CSharp.dll::MVMaterialRepository::MVMaterialRepository_IsMaterialUnlocked
               (MVMaterialRepository *this,Byte__Array *mats,MethodInfo *method)

{
  if (mats != (Byte__Array *)0x0) {
    for (uVar1 = 0; (int)uVar1 < (int)mats->max_length; uVar1 = uVar1 + 1) {
      if (mats->max_length <= uVar1) {
code_?:
        func_?();
        pcVar2 = (code *)swi(3);
        bVar3 = (*pcVar2)();
        return bVar3;
      }
      pMVar4 = MVMaterialRepository_GetMaterial(this,mats->vector[uVar1],(MethodInfo *)0x0);
      if (pMVar4 == (MVMaterial *)0x0) {
        func_?();
        goto code_?;
      }
      if ((pMVar4->fields).isUnlocked == 0) {
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
  pMVar1 = MVMaterialRepository_GetMaterial(this,mat,(MethodInfo *)0x0);
  if (pMVar1 != (MVMaterial *)0x0) {
    return (pMVar1->fields).isUnlocked;
  }
  uVar2 = func_?(&stack0xfffffffc);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  bVar4 = (*pcVar3)();
  return bVar4;
}


/* Void RegenerateMaterialButtonTextures() */

void Assembly-CSharp.dll::MVMaterialRepository::
     MVMaterialRepository_RegenerateMaterialButtonTextures
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
            || (this_01 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                          RegularExpressions::RegexCharClass+SingleRange]::
                          List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                    (this_00,index,
                                     MethodInfo__System__Collections__Generic__List<MVMaterial>__get_Item_int_
                                    ), this_01 == (RegexCharClass_SingleRange)0x0)) ||
           (MVMaterial::MVMaterial_GenerateCube((MVMaterial *)this_01,index,(MethodInfo *)0x0),
           pMVar2 == (MaterialButtonTextureGenerator *)0x0)) goto code_?;
        this = (MVMaterialRepository *)
               MaterialButtonTextureGenerator::MaterialButtonTextureGenerator_TakePicture
                         (pMVar2,*(Mesh **)((int)this_01 + 0x10),(MethodInfo *)0x0);
        *(MVMaterialRepository **)((int)this_01 + 0x34) = this;
        func_?();
        index = index + 1;
        pLVar3 = (((Texture__Fields *)&(this->fields).materials)->_).m_CachedPtr;
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
  (this->fields).materials = this_00;
  func_?(&this->fields,this_00);
  fVar1 = 0.0;
  pMVar2 = (MethodInfo *)0x0;
  fVar3 = 0.0;
  fVar4 = 0.0;
  fVar5 = 0.0;
  UnityEngine.TextCoreFontEngineModule.dll::UnityEngine::TextCore::GlyphMetrics::GlyphMetrics__ctor
            ((GlyphMetrics *)&stack0xffffffe4,0.43,0.0,1.0,20.0,0.0,(MethodInfo *)0x0);
  (this->fields).physicalPropertiesDefault.friction = (float)pMVar2;
  (this->fields).physicalPropertiesDefault.bouncyness = fVar3;
  (this->fields).physicalPropertiesDefault.softness = fVar4;
  (this->fields).physicalPropertiesDefault.staticFriction = fVar5;
  (this->fields).physicalPropertiesDefault.toughness = fVar1;
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            ((Object *)this,ExceptionArgument__Enum_obj,pMVar2);
  if (TypeInfo__MVMaterialRepository->static_fields->instance != (MVMaterialRepository *)0x0) {
    return;
  }
  TypeInfo__MVMaterialRepository->static_fields->instance = this;
  func_?();
  if ((TypeInfo__MaterialDescription->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  pMVar6 = TypeInfo__MaterialDescription->static_fields->materialDescriptions;
  if (pMVar6 != (MaterialDescription__Array *)0x0) {
    if (pMVar6->max_length < 0x19) goto code_?;
    if (pMVar6->vector[0x18] != (MaterialDescription *)0x0) {
      pSVar7 = (pMVar6->vector[0x18]->fields)._Name_k__BackingField;
      pMVar8 = TypeInfo__MaterialDescription->static_fields->materialDescriptions->vector[0x18];
      if (pMVar8 != (MaterialDescription *)0x0) {
        pSVar9 = (pMVar8->fields)._Description_k__BackingField;
        pMVar2 = (MethodInfo *)(this->fields).physicalPropertiesDefault.softness;
        fVar4 = (this->fields).physicalPropertiesDefault.staticFriction;
        fVar3 = (this->fields).physicalPropertiesDefault.toughness;
        pMVar10 = (MVMaterial *)func_?();
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        fVar5 = 0.0;
        pMVar11 = pMVar10;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                  ((Object *)pMVar10,ExceptionArgument__Enum_obj,pMVar2);
        (pMVar10->fields)._ModifierPackageType_k__BackingField = 0;
        (pMVar10->fields)._PhysicalProperties_k__BackingField.friction = (float)pMVar11;
        (pMVar10->fields)._PhysicalProperties_k__BackingField.bouncyness = fVar5;
        (pMVar10->fields)._PhysicalProperties_k__BackingField.softness = (float)pMVar2;
        (pMVar10->fields)._PhysicalProperties_k__BackingField.staticFriction = fVar4;
        (pMVar10->fields)._PhysicalProperties_k__BackingField.toughness = fVar3;
        MVMaterial::MVMaterial_GenerateCube(pMVar10,0x18,(MethodInfo *)0x0);
        MVar12 = MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0);
        if (MVar12 == MVGameMode__Enum_Play) {
code_?:
          (pMVar10->fields).unlockPriceGold = 0;
          (pMVar10->fields).isUnlocked = 0;
          (pMVar10->fields)._Name_k__BackingField = pSVar7;
          func_?();
          (pMVar10->fields)._Description_k__BackingField = pSVar9;
          func_?();
          (this->fields).noMaterial = pMVar10;
          func_?();
          if ((TypeInfo__MVPhysics->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          method_00 = TypeInfo__MVMaterial;
          pMVar13 = TypeInfo__MVPhysics->static_fields;
          fVar4 = (pMVar13->airPhysicalProperties).friction;
          fVar5 = (pMVar13->airPhysicalProperties).bouncyness;
          fVar1 = (pMVar13->airPhysicalProperties).softness;
          fVar14 = (pMVar13->airPhysicalProperties).staticFriction;
          fVar3 = (pMVar13->airPhysicalProperties).toughness;
          pMVar10 = (MVMaterial *)func_?();
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                    ((Object *)pMVar10,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
          (pMVar10->fields)._ModifierPackageType_k__BackingField = 0;
          (pMVar10->fields)._PhysicalProperties_k__BackingField.friction = fVar4;
          (pMVar10->fields)._PhysicalProperties_k__BackingField.bouncyness = fVar5;
          (pMVar10->fields)._PhysicalProperties_k__BackingField.softness = fVar1;
          (pMVar10->fields)._PhysicalProperties_k__BackingField.staticFriction = fVar14;
          (pMVar10->fields)._PhysicalProperties_k__BackingField.toughness = fVar3;
          (this->fields).inAirMaterial = pMVar10;
          func_?();
          return;
        }
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        pSVar9 = (String *)0x0;
        bVar15 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                          ((Object_1 *)0x0,(Object_1 *)0x0,(MethodInfo *)0x0);
        if (bVar15 == 0) goto code_?;
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar16 = (code *)swi(3);
  (*pcVar16)();
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

