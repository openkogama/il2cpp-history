
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
  if ((this->fields).materials != (List_1_MVMaterial_ *)0x0) {
    this_00 = (this->fields).materials;
    materialId = (this_00->fields)._size;
    if (physicalProperties != (Single__Array *)0x0) {
      if ((((physicalProperties->max_length == 0) || (physicalProperties->max_length < 2)) ||
          (physicalProperties->max_length < 3)) ||
         ((physicalProperties->max_length < 4 || (physicalProperties->max_length < 5))))
      goto code_?;
      PStack_1.toughness = 0.0;
      PStack_1.friction = 0.0;
      PStack_1.bouncyness = 0.0;
      PStack_1.softness = 0.0;
      PStack_1.staticFriction = 0.0;
      MVWorldObject.dll::MV::WorldObject::PhysicalProperties::PhysicalProperties__ctor
                (&PStack_1,physicalProperties->vector[0],physicalProperties->vector[1],
                 physicalProperties->vector[2],physicalProperties->vector[3],
                 physicalProperties->vector[4],(MethodInfo *)0x0);
      this_01 = (MVMaterial *)func_?(TypeInfo__MVMaterial);
      if (this_01 != (MVMaterial *)0x0) {
        physicalProperties_00.bouncyness = PStack_1.bouncyness;
        physicalProperties_00.friction = PStack_1.friction;
        physicalProperties_00.softness = PStack_1.softness;
        physicalProperties_00.staticFriction = PStack_1.staticFriction;
        physicalProperties_00.toughness = PStack_1.toughness;
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
    }
  }
  func_?();
code_?:
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
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
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
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
  if (this_00 != (List_1_MVMaterial_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]::
    LowLevelList_1_System_Object___ctor
              ((LowLevelList_1_System_Object_ *)this_00,
               MethodInfo__System__Collections__Generic__List<MVMaterial>__List__);
    (this->fields).materials = this_00;
    func_?(&this->fields,this_00);
    method_01 = (MethodInfo *)0x0;
    method_00 = (MethodInfo *)&UNK_?;
    MVWorldObject.dll::MV::WorldObject::PhysicalProperties::PhysicalProperties__ctor
              ((PhysicalProperties *)&stack0xffffffe0,0.43,0.0,1.0,20.0,0.0,(MethodInfo *)0x0);
    (this->fields).physicalPropertiesDefault.friction = (float)method_01;
    (this->fields).physicalPropertiesDefault.bouncyness = 0.0;
    (this->fields).physicalPropertiesDefault.softness = 0.0;
    (this->fields).physicalPropertiesDefault.staticFriction = 0.0;
    (this->fields).physicalPropertiesDefault.toughness = 0.0;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              ((Object *)this,ExceptionArgument__Enum_obj,method_01);
    if (TypeInfo__MVMaterialRepository->static_fields->instance != (MVMaterialRepository *)0x0) {
      return;
    }
    TypeInfo__MVMaterialRepository->static_fields->instance = this;
    func_?();
    if ((TypeInfo__MaterialDescription->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__MaterialDescription);
    }
    pMVar1 = TypeInfo__MaterialDescription->static_fields->materialDescriptions;
    if (pMVar1 != (MaterialDescription__Array *)0x0) {
      if (pMVar1->max_length < 0x19) goto code_?;
      if (pMVar1->vector[0x18] != (MaterialDescription *)0x0) {
        pSVar2 = (pMVar1->vector[0x18]->fields)._Name_k__BackingField;
        pMVar3 = TypeInfo__MaterialDescription->static_fields->materialDescriptions->vector[0x18];
        if (pMVar3 != (MaterialDescription *)0x0) {
          pSVar4 = (pMVar3->fields)._Description_k__BackingField;
          fVar5 = (this->fields).physicalPropertiesDefault.friction;
          fVar6 = (this->fields).physicalPropertiesDefault.bouncyness;
          fVar7 = (this->fields).physicalPropertiesDefault.softness;
          fVar8 = (this->fields).physicalPropertiesDefault.staticFriction;
          fVar9 = (this->fields).physicalPropertiesDefault.toughness;
          pMVar10 = (MVMaterial *)func_?(TypeInfo__MVMaterial);
          if (pMVar10 != (MVMaterial *)0x0) {
            if (cRam_? == '\0') {
              func_?(&TypeInfo__UnityEngine__Object);
              cRam_? = '\x01';
            }
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                      ((Object *)pMVar10,ExceptionArgument__Enum_obj,method_00);
            (pMVar10->fields)._ModifierPackageType_k__BackingField = 0;
            (pMVar10->fields)._PhysicalProperties_k__BackingField.friction = fVar5;
            (pMVar10->fields)._PhysicalProperties_k__BackingField.bouncyness = fVar6;
            (pMVar10->fields)._PhysicalProperties_k__BackingField.softness = fVar7;
            (pMVar10->fields)._PhysicalProperties_k__BackingField.staticFriction = fVar8;
            (pMVar10->fields)._PhysicalProperties_k__BackingField.toughness = fVar9;
            MVMaterial::MVMaterial_GenerateCube(pMVar10,0x18,(MethodInfo *)0x0);
            MVar11 = MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0);
            if (MVar11 != MVGameMode__Enum_Play) {
              if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
                func_?(TypeInfo__UnityEngine__Object);
              }
              bVar12 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                                 ((Object_1 *)0x0,(Object_1 *)0x0,(MethodInfo *)0x0);
              if (bVar12 != 0) goto code_?;
            }
            (pMVar10->fields).unlockPriceGold = 0;
            (pMVar10->fields).isUnlocked = 0;
            (pMVar10->fields)._Name_k__BackingField = pSVar2;
            func_?(&(pMVar10->fields)._Name_k__BackingField,pSVar2);
            (pMVar10->fields)._Description_k__BackingField = pSVar4;
            func_?(&(pMVar10->fields)._Description_k__BackingField,pSVar4);
            (this->fields).noMaterial = pMVar10;
            func_?(&(this->fields).noMaterial,pMVar10);
            if ((TypeInfo__MVPhysics->_1).cctor_finished_or_no_cctor == 0) {
              func_?(TypeInfo__MVPhysics);
            }
            pMVar13 = TypeInfo__MVPhysics->static_fields;
            fVar5 = (pMVar13->airPhysicalProperties).friction;
            fVar6 = (pMVar13->airPhysicalProperties).bouncyness;
            fVar7 = (pMVar13->airPhysicalProperties).softness;
            fVar8 = (pMVar13->airPhysicalProperties).staticFriction;
            fVar9 = (pMVar13->airPhysicalProperties).toughness;
            pMVar10 = (MVMaterial *)func_?(TypeInfo__MVMaterial);
            if (pMVar10 != (MVMaterial *)0x0) {
              mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                        ((Object *)pMVar10,ExceptionArgument__Enum_obj,unaff_EBX);
              (pMVar10->fields)._ModifierPackageType_k__BackingField = 0;
              (pMVar10->fields)._PhysicalProperties_k__BackingField.friction = fVar5;
              (pMVar10->fields)._PhysicalProperties_k__BackingField.bouncyness = fVar6;
              (pMVar10->fields)._PhysicalProperties_k__BackingField.softness = fVar7;
              (pMVar10->fields)._PhysicalProperties_k__BackingField.staticFriction = fVar8;
              (pMVar10->fields)._PhysicalProperties_k__BackingField.toughness = fVar9;
              (this->fields).inAirMaterial = pMVar10;
              func_?(&(this->fields).inAirMaterial,pMVar10);
              return;
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
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

