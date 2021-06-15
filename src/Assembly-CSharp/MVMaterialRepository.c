
/* Void AddMaterial(String, String, String, MaterialSound, AvatarModifierPackageType, Int32,
   Boolean, Single[], MaterialButtonTextureGenerator) */

void Assembly-CSharp.dll::MVMaterialRepository::MVMaterialRepository_AddMaterial
               (MVMaterialRepository *this,String *name,String *description,String *path,
               MaterialSound__Enum materialSound,AvatarModifierPackageType__Enum modifierPackageType
               ,int32_t priceGold,bool isUnlocked,Single__Array *physicalProperties,
               MaterialButtonTextureGenerator *materialButtonTextureGenerator,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).materials;
  if (pLVar1 == (List_1_MVMaterial_ *)0x0) {
code_?:
    func_?(0);
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
  }
  else {
    mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::Serialization::
    JsonProperty]::
    Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
              ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar1,
               MethodInfo__System__Collections__Generic__List<MVMaterial>__get_Count__);
    pLVar1 = (this->fields).materials;
    if (pLVar1 == (List_1_MVMaterial_ *)0x0) goto code_?;
    materialId = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                 Serialization::JsonProperty]::
                 Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                           ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar1,
                            MethodInfo__System__Collections__Generic__List<MVMaterial>__get_Count__)
    ;
    if (physicalProperties == (Single__Array *)0x0) goto code_?;
    uVar3 = physicalProperties->max_length;
    uStack_4 = 0;
    if (uVar3 == 0) goto code_?;
    if (uVar3 < 2) goto code_?;
    if (uVar3 < 3) goto code_?;
    if (3 < uVar3) {
      if (uVar3 < 5) goto code_?;
      fStack_5 = 0.0;
      uStack_4 = 0;
      uStack_6 = 0;
      uStack_7 = 0;
      uStack_8 = 0;
      func_?(&uStack_4,physicalProperties->vector[0],physicalProperties->vector[1],
                      physicalProperties->vector[2],physicalProperties->vector[3],
                      physicalProperties->vector[4]);
      this_00 = (MVMaterial *)func_?(TypeInfo__MVMaterial);
      physicalProperties_00.bouncyness = (float)uStack_6;
      physicalProperties_00.friction = (float)uStack_4;
      physicalProperties_00.softness = (float)uStack_7;
      physicalProperties_00.staticFriction = (float)uStack_8;
      physicalProperties_00.toughness = fStack_5;
      MVMaterial::MVMaterial__ctor_1
                (this_00,(int32_t)materialId,name,description,physicalProperties_00,materialSound,
                 modifierPackageType,priceGold,isUnlocked,materialButtonTextureGenerator,
                 (MethodInfo *)0x0);
      if (pLVar1 != (List_1_MVMaterial_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
                  ((List_1_UIPushOption_ *)pLVar1,(UIPushOption__Enum)this_00,
                   MethodInfo__System__Collections__Generic__List<MVMaterial>__Add_MVMaterial_);
        return;
      }
      goto code_?;
    }
  }
  uVar2 = func_?(0);
  func_?(uVar2);
code_?:
  uVar2 = func_?(0);
  func_?(uVar2);
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
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
  puStack_4 = &stack0xffffffb4;
  puVar5 = &stack0xffffffb4;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  CStack_6.klass = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)0x0;
  CStack_6.monitor = (MonitorData *)0x0;
  CStack_6.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)0x0;
  CStack_6.fields.syncRoot = (Object *)0x0;
  func_?();
  pOVar7 = (Object *)0x0;
  pOStack_8 = (Object *)0x0;
  this_00 = (List_1_UnityEngine_Color32_ *)(this->fields).materials;
  puStack_9 = (undefined4 *)&stack0xffffffb4;
  puStack_4 = &stack0xffffffb4;
  if (this_00 != (List_1_UnityEngine_Color32_ *)0x0) {
    puStack_9 = (undefined4 *)&stack0xffffffb4;
    puStack_4 = &stack0xffffffb4;
    pLVar10 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Color32]::
             List_1_UnityEngine_Color32__GetEnumerator
                       ((List_1_T_Enumerator_UnityEngine_Color32_ *)auStack_11,this_00,
                        MethodInfo__System__Collections__Generic__List<MVMaterial>__GetEnumerator__)
    ;
    CStack_6.klass = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)pLVar10->l;
    CStack_6.monitor = (MonitorData *)pLVar10->next;
    CStack_6.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar10->ver;
    CStack_6.fields.syncRoot = (Object *)(pLVar10->current).rgba;
    uStack_1 = 0;
    while (cVar12 = func_?(&CStack_6,
                                   MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVMaterial>__MoveNext__
                                  ), cVar12 != '\0') {
      pOVar13 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
               Serialization::JsonProperty]::
               Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                         (&CStack_6,
                          MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVMaterial>__get_Current__
                         );
      if (pOVar13 == (Object *)0x0) goto code_?;
      if (*(char *)&pOVar13[1].monitor != '\0') {
        pOVar7 = (Object *)((int)&pOVar7->klass + 1);
        pOStack_8 = pOVar7;
      }
    }
    *puStack_9 = 0x49;
    uStack_1 = 0xffffffff;
    func_?(&CStack_6,
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVMaterial>__Dispose__
                   );
    this_01 = (this->fields).materials;
    if (this_01 != (List_1_MVMaterial_ *)0x0) {
      pOVar13 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
               Serialization::JsonProperty]::
               Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                         ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_01,
                          MethodInfo__System__Collections__Generic__List<MVMaterial>__get_Count__);
      *unaff_FS_OFFSET = uStack_3;
      return pOVar13 == pOVar7;
    }
  }
code_?:
  func_?(0);
  func_?(0,0,0);
  pcVar14 = (code *)swi(3);
  bVar15 = (*pcVar14)();
  return bVar15;
}


/* MVMaterial GetMaterial(Byte) */

MVMaterial *
Assembly-CSharp.dll::MVMaterialRepository::MVMaterialRepository_GetMaterial
          (MVMaterialRepository *this,uint8_t materialId,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).materials;
  if (pLVar1 != (List_1_MVMaterial_ *)0x0) {
    pOVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar1,
                        MethodInfo__System__Collections__Generic__List<MVMaterial>__get_Count__);
    if ((int)pOVar2 <= (int)(uint)materialId) {
      return (this->fields).noMaterial;
    }
    pLVar1 = (this->fields).materials;
    if (pLVar1 != (List_1_MVMaterial_ *)0x0) {
      pMVar3 = (MVMaterial *)
               mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
               IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                         ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar1,
                          (uint)materialId,
                          MethodInfo__System__Collections__Generic__List<MVMaterial>__get_Item_int_)
      ;
      return pMVar3;
    }
  }
  func_?(0);
  pcVar4 = (code *)swi(3);
  pMVar3 = (MVMaterial *)(*pcVar4)();
  return pMVar3;
}


/* PhysicalProperties GetMaterialPhysicalProperties(Byte) */

PhysicalProperties *
Assembly-CSharp.dll::MVMaterialRepository::MVMaterialRepository_GetMaterialPhysicalProperties
          (PhysicalProperties *__return_storage_ptr__,MVMaterialRepository *this,uint8_t materialId,
          MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).materials;
  if (pLVar1 != (List_1_MVMaterial_ *)0x0) {
    pOVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar1,
                        MethodInfo__System__Collections__Generic__List<MVMaterial>__get_Count__);
    if ((int)(uint)materialId < (int)pOVar2) {
      pLVar1 = (this->fields).materials;
      if (pLVar1 == (List_1_MVMaterial_ *)0x0) goto code_?;
      pMVar3 = (MVMaterial *)
               mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
               IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                         ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar1,
                          (uint)materialId,
                          MethodInfo__System__Collections__Generic__List<MVMaterial>__get_Item_int_)
      ;
    }
    else {
      pMVar3 = (this->fields).noMaterial;
    }
    if (pMVar3 != (MVMaterial *)0x0) {
      fVar4 = (pMVar3->fields)._PhysicalProperties_k__BackingField.bouncyness;
      fVar5 = (pMVar3->fields)._PhysicalProperties_k__BackingField.softness;
      fVar6 = (pMVar3->fields)._PhysicalProperties_k__BackingField.staticFriction;
      fVar7 = (pMVar3->fields)._PhysicalProperties_k__BackingField.toughness;
      __return_storage_ptr__->friction =
           (pMVar3->fields)._PhysicalProperties_k__BackingField.friction;
      __return_storage_ptr__->bouncyness = fVar4;
      __return_storage_ptr__->softness = fVar5;
      __return_storage_ptr__->staticFriction = fVar6;
      __return_storage_ptr__->toughness = fVar7;
      return __return_storage_ptr__;
    }
  }
code_?:
  func_?(0);
  pcVar8 = (code *)swi(3);
  pPVar9 = (PhysicalProperties *)(*pcVar8)();
  return pPVar9;
}


/* Void Reset() */

void Assembly-CSharp.dll::MVMaterialRepository::MVMaterialRepository_Reset
               (MVMaterialRepository *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVMaterialRepository->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVMaterialRepository->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVMaterialRepository);
  }
  TypeInfo__MVMaterialRepository->static_fields->instance = (MVMaterialRepository *)0x0;
  return;
}


/* Void SetMaterialPrice(Int32, Int32) */

void Assembly-CSharp.dll::MVMaterialRepository::MVMaterialRepository_SetMaterialPrice
               (MVMaterialRepository *this,int32_t materialID,int32_t materialUnlockPriceGold,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).materials;
  if (this_00 != (List_1_MVMaterial_ *)0x0) {
    pIVar1 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
             IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                       ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)this_00,materialID,
                        MethodInfo__System__Collections__Generic__List<MVMaterial>__get_Item_int_);
    if (pIVar1 != (IEventSystemHandler *)0x0) {
      pIVar1[1].klass = (IEventSystemHandler__Class *)materialUnlockPriceGold;
      return;
    }
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetMaterialUnlocked(Int32, Boolean) */

void Assembly-CSharp.dll::MVMaterialRepository::MVMaterialRepository_SetMaterialUnlocked
               (MVMaterialRepository *this,int32_t materialId,bool unlocked,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).materials;
  if (this_00 != (List_1_MVMaterial_ *)0x0) {
    pIVar1 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
             IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                       ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)this_00,materialId,
                        MethodInfo__System__Collections__Generic__List<MVMaterial>__get_Item_int_);
    if (pIVar1 != (IEventSystemHandler *)0x0) {
      *(bool *)&pIVar1[1].monitor = unlocked;
      return;
    }
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* MVMaterialRepository() */

void Assembly-CSharp.dll::MVMaterialRepository::MVMaterialRepository__ctor
               (MVMaterialRepository *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (List_1_UnityEngine_Vector4_ *)
            func_?(TypeInfo__System__Collections__Generic__List<MVMaterial>);
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
  List_1_UnityEngine_Vector4___ctor
            (this_00,MethodInfo__System__Collections__Generic__List<MVMaterial>__List__);
  method_01 = (MethodInfo *)&stack0xffffffd4;
  pIVar1 = (Il2CppClass *)0x0;
  pIVar2 = (Il2CppMethodPointer)0x0;
  pIVar3 = (Il2CppMethodPointer)0x0;
  pIVar4 = (InvokerMethod)0x0;
  pcVar5 = (char *)0x0;
  (this->fields).materials = (List_1_MVMaterial_ *)this_00;
  func_?(method_01,0x3edc28f6,0,0x3f800000,0x41a00000,0,0);
  (this->fields).physicalPropertiesDefault.friction = (float)pIVar2;
  (this->fields).physicalPropertiesDefault.bouncyness = (float)pIVar3;
  (this->fields).physicalPropertiesDefault.softness = (float)pIVar4;
  (this->fields).physicalPropertiesDefault.staticFriction = (float)pcVar5;
  (this->fields).physicalPropertiesDefault.toughness = (float)pIVar1;
  ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,method_01);
  if ((((uint)(TypeInfo__MVMaterialRepository->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVMaterialRepository->_1).cctor_started == 0)) {
    func_?();
  }
  TypeInfo__MVMaterialRepository->static_fields->instance = this;
  if ((((uint)(TypeInfo__MaterialDescription->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MaterialDescription->_1).cctor_started == 0)) {
    func_?();
  }
  pMVar6 = TypeInfo__MaterialDescription->static_fields->materialDescriptions;
  if (pMVar6 == (MaterialDescription__Array *)0x0) {
code_?:
    func_?();
  }
  else if (0x18 < pMVar6->max_length) {
    if (pMVar6->vector[0x18] != (MaterialDescription *)0x0) {
      name = (String *)
             mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
             Collection_1_VoxelHit__get_Items
                       ((Collection_1_VoxelHit_ *)pMVar6->vector[0x18],(MethodInfo *)0x0);
      pMVar6 = TypeInfo__MaterialDescription->static_fields->materialDescriptions;
      if (pMVar6 != (MaterialDescription__Array *)0x0) {
        if (pMVar6->max_length < 0x19) goto code_?;
        if (pMVar6->vector[0x18] != (MaterialDescription *)0x0) {
          description = (String *)
                        mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::
                        Json::Serialization::JsonProperty]::
                        Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                                  ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)
                                   pMVar6->vector[0x18],(MethodInfo *)0x0);
          physicalProperties = (this->fields).physicalPropertiesDefault;
          pMVar7 = (MVMaterial *)func_?();
          MVMaterial::MVMaterial__ctor_1
                    (pMVar7,0x18,name,description,physicalProperties,MaterialSound__Enum_None,
                     AvatarModifierPackageType__Enum_None,0,0,(MaterialButtonTextureGenerator *)0x0,
                     (MethodInfo *)0x0);
          (this->fields).noMaterial = pMVar7;
          if ((((uint)(TypeInfo__MVPhysics->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__MVPhysics->_1).cctor_started == 0)) {
            func_?();
          }
          pMVar8 = TypeInfo__MVPhysics->static_fields;
          pTVar9 = (Transform *)(pMVar8->airPhysicalProperties).friction;
          fVar10 = (pMVar8->airPhysicalProperties).bouncyness;
          pSVar11 = (ScaleAnimationBase_OnScaleAnimationStoppedDelegate *)
                   (pMVar8->airPhysicalProperties).softness;
          fVar12 = (pMVar8->airPhysicalProperties).staticFriction;
          fVar13 = (pMVar8->airPhysicalProperties).toughness;
          method_00 = TypeInfo__MVMaterial;
          pMVar7 = (MVMaterial *)func_?();
          ScaleAnimationBase::ScaleAnimationBase_Play
                    ((ScaleAnimationBase *)pMVar7,0.0,(MethodInfo *)method_00);
          (pMVar7->fields)._ModifierPackageType_k__BackingField = 0;
          (pMVar7->fields)._PhysicalProperties_k__BackingField.friction = (float)pTVar9;
          (pMVar7->fields)._PhysicalProperties_k__BackingField.bouncyness = fVar10;
          (pMVar7->fields)._PhysicalProperties_k__BackingField.softness = (float)pSVar11;
          (pMVar7->fields)._PhysicalProperties_k__BackingField.staticFriction = fVar12;
          (pMVar7->fields)._PhysicalProperties_k__BackingField.toughness = fVar13;
          (this->fields).inAirMaterial = pMVar7;
          return;
        }
      }
    }
    goto code_?;
  }
  uVar14 = func_?(0);
  func_?(uVar14);
code_?:
  func_?();
  func_?();
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}


/* Boolean get_AllowDestructibleMaterialSelection() */

bool Assembly-CSharp.dll::MVMaterialRepository::
     MVMaterialRepository_get_AllowDestructibleMaterialSelection(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVMaterialRepository->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVMaterialRepository->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVMaterialRepository);
  }
  pMVar1 = TypeInfo__MVMaterialRepository->static_fields->instance;
  if (pMVar1 != (MVMaterialRepository *)0x0) {
    return (pMVar1->fields).allowDestructibleMaterialSelection;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  bVar3 = (*pcVar2)();
  return bVar3;
}


/* Int32 get_MaterialCount() */

int32_t Assembly-CSharp.dll::MVMaterialRepository::MVMaterialRepository_get_MaterialCount
                  (MVMaterialRepository *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).materials;
  if (this_00 != (List_1_MVMaterial_ *)0x0) {
    pOVar1 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_00,
                        MethodInfo__System__Collections__Generic__List<MVMaterial>__get_Count__);
    return (int32_t)pOVar1;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  iVar3 = (*pcVar2)();
  return iVar3;
}


/* Void set_AllowDestructibleMaterialSelection(Boolean) */

void Assembly-CSharp.dll::MVMaterialRepository::
     MVMaterialRepository_set_AllowDestructibleMaterialSelection(bool value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVMaterialRepository->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVMaterialRepository->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVMaterialRepository);
  }
  pMVar1 = TypeInfo__MVMaterialRepository->static_fields->instance;
  if (pMVar1 != (MVMaterialRepository *)0x0) {
    (pMVar1->fields).allowDestructibleMaterialSelection = value;
    return;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

