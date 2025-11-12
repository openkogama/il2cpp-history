
/* Boolean Equip(AvatarItemType, AvatarEquipableType, Dictionary`2[System.Object,System.Object],
   Int32) */

bool Assembly-CSharp.dll::VehicleEquipable::VehicleEquipable_Equip
               (VehicleEquipable *this,AvatarItemType__Enum type,AvatarEquipableType__Enum equipType
               ,Dictionary_2_System_Object_System_Object_ *itemData,int32_t variantID,
               MethodInfo *method)

{
  pDVar1 = itemData;
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
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_updateItemState);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_variantId);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_itemData);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_type);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (equipType == AvatarEquipableType__Enum_Modifier) {
    if (type != AvatarItemType__Enum_Health) {
      return 0;
    }
    pMVar2 = (this->fields).interactableLocal;
    if (pMVar2 != (MVInteractableBase *)0x0) {
      (*(pMVar2->klass->vtable).__unknown_2.methodPtr)
                (pMVar2,_UNK_?,0,(pMVar2->klass->vtable).__unknown_2.method);
      return 1;
    }
  }
  else {
    this_01 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
               *)FUN_?(
                              TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                              );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements
    ::UIR::UIRenderDevice+DisableForceGammaMaterial]::
    Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
              (this_01,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
              );
    aAStackX_18[0] = type;
    pOVar3 = (Object *)FUN_?(uRam_?,aAStackX_18);
    if (this_01 !=
        (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
         *)0x0) {
      uVar4 = CONCAT71((int7)((ulonglong)pDVar1 >> 8),2);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__TryInsert
                ((Dictionary_2_System_Object_System_Object_ *)this_01,(Object *)StringLiteral_type,
                 pOVar3,(InsertionBehavior__Enum)uVar4,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                 ->klass->rgctx_data[0x22].method);
      aAStackX_18[0] = variantID;
      pOVar3 = (Object *)FUN_?(uRam_?,aAStackX_18);
      uVar4 = CONCAT71((int7)((ulonglong)uVar4 >> 8),2);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__TryInsert
                ((Dictionary_2_System_Object_System_Object_ *)this_01,
                 (Object *)StringLiteral_variantId,pOVar3,(InsertionBehavior__Enum)uVar4,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                 ->klass->rgctx_data[0x22].method);
      aAStackX_18[0] = AvatarItemType__Enum_Bazooka;
      pOVar3 = (Object *)FUN_?(uRam_?,aAStackX_18);
      uVar4 = CONCAT71((int7)((ulonglong)uVar4 >> 8),2);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__TryInsert
                ((Dictionary_2_System_Object_System_Object_ *)this_01,
                 (Object *)StringLiteral_updateItemState,pOVar3,(InsertionBehavior__Enum)uVar4,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                 ->klass->rgctx_data[0x22].method);
      if (itemData != (Dictionary_2_System_Object_System_Object_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__TryInsert
                  ((Dictionary_2_System_Object_System_Object_ *)this_01,
                   (Object *)StringLiteral_itemData,(Object *)itemData,
                   (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar4 >> 8),2),
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                   ->klass->rgctx_data[0x22].method);
      }
      this_00 = (this->fields).currentItem;
      if (this_00 != (MVRuntimeDataVariable *)0x0) {
        MVRuntimeDataVariable::MVRuntimeDataVariable_set_Value
                  (this_00,(Object *)this_01,(MethodInfo *)0x0);
        return 1;
      }
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  bVar6 = (*pcVar5)();
  return bVar6;
}


/* Void Holster() */

void Assembly-CSharp.dll::VehicleEquipable::VehicleEquipable_Holster
               (VehicleEquipable *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
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
    FUN_?(&StringLiteral_updateItemState);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields).currentItem;
  if (pMVar1 != (MVRuntimeDataVariable *)0x0) {
    this_00 = (Dictionary_2_System_Object_System_Object_ *)
              ObscuredTypesConverter::ObscuredTypesConverter_CreateUnObscuredValue
                        ((pMVar1->fields).value,(MethodInfo *)0x0);
    if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      bVar2 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->
              _1).naturalAligment;
      if ((bVar2 <= (this_00->klass->_1).naturalAligment) &&
         ((Dictionary_2_System_Object_System_Object___Class *)
          (this_00->klass->_1).typeHierarchy[(ulonglong)bVar2 - 1] ==
          TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
        auStackX_8[0] = 1;
        value = (Object *)FUN_?(uRam_?,auStackX_8);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__TryInsert
                  (this_00,(Object *)StringLiteral_updateItemState,value,
                   CONCAT31((int3)((uint)in_R9D >> 8),1),
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                   ->klass->rgctx_data[0x22].method);
        pMVar1 = (this->fields).currentItem;
        if (pMVar1 == (MVRuntimeDataVariable *)0x0) goto code_?;
        MVRuntimeDataVariable::MVRuntimeDataVariable_set_Value
                  (pMVar1,(Object *)this_00,(MethodInfo *)0x0);
      }
    }
    return;
  }
code_?:
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void Unequip() */

void Assembly-CSharp.dll::VehicleEquipable::VehicleEquipable_Unequip
               (VehicleEquipable *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
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
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields).currentItem;
  this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
             *)FUN_?(
                            TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                            );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements::
  UIR::UIRenderDevice+DisableForceGammaMaterial]::
  Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
            );
  if (pMVar1 == (MVRuntimeDataVariable *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pOVar3 = ObscuredTypesConverter::ObscuredTypesConverter_CreateObscuredValue
                     ((Object *)this_00,(MethodInfo *)0x0);
  bVar4 = iRam_? != 0;
  pOVar5 = (pMVar1->fields).value;
  (pMVar1->fields).value = pOVar3;
  if (bVar4) {
    uVar6 = (uint)((ulonglong)&(pMVar1->fields).value >> 0xc);
    puVar7 = (ulonglong *)((ulonglong)((uVar6 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar8 = *puVar7;
      LOCK();
      uVar9 = *puVar7;
      if (uVar8 == uVar9) {
        *puVar7 = uVar8 | 1L << (uVar6 & 0x3f);
      }
      UNLOCK();
    } while (uVar8 != uVar9);
  }
  if (pOVar5 != pOVar3) {
    if ((pMVar1->fields).OnChange != (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
      pMVar10 = (pMVar1->fields).OnChange;
      pOVar5 = ObscuredTypesConverter::ObscuredTypesConverter_CreateUnObscuredValue
                         ((pMVar1->fields).value,(MethodInfo *)0x0);
      pcVar2 = (pMVar10->fields)._._.invoke_impl;
      (*pcVar2)((pMVar10->fields)._._.method_code,pOVar5,(pMVar10->fields)._._.method,pcVar2,unaff_RDI
               );
    }
    if (((pMVar1->fields).writeThrough != 0) &&
       ((pMVar1->fields).OnWriteThrough != (MVRuntimeDataVariable_OnWriteThroughDelegate *)0x0)) {
      pMVar11 = (pMVar1->fields).OnWriteThrough;
      pOVar5 = ObscuredTypesConverter::ObscuredTypesConverter_CreateUnObscuredValue
                         ((pMVar1->fields).value,(MethodInfo *)0x0);
      (*(pMVar11->fields)._._.invoke_impl)
                ((pMVar11->fields)._._.method_code,pOVar5,(pMVar11->fields)._._.method);
    }
  }
  return;
}


/* Void Unholster() */

void Assembly-CSharp.dll::VehicleEquipable::VehicleEquipable_Unholster
               (VehicleEquipable *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
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
    FUN_?(&StringLiteral_updateItemState);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields).currentItem;
  if (pMVar1 != (MVRuntimeDataVariable *)0x0) {
    this_00 = (Dictionary_2_System_Object_System_Object_ *)
              ObscuredTypesConverter::ObscuredTypesConverter_CreateUnObscuredValue
                        ((pMVar1->fields).value,(MethodInfo *)0x0);
    if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      bVar2 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->
              _1).naturalAligment;
      if ((bVar2 <= (this_00->klass->_1).naturalAligment) &&
         ((Dictionary_2_System_Object_System_Object___Class *)
          (this_00->klass->_1).typeHierarchy[(ulonglong)bVar2 - 1] ==
          TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
        auStackX_8[0] = 2;
        value = (Object *)FUN_?(uRam_?,auStackX_8);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__TryInsert
                  (this_00,(Object *)StringLiteral_updateItemState,value,
                   CONCAT31((int3)((uint)in_R9D >> 8),1),
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                   ->klass->rgctx_data[0x22].method);
        pMVar1 = (this->fields).currentItem;
        if (pMVar1 == (MVRuntimeDataVariable *)0x0) goto code_?;
        MVRuntimeDataVariable::MVRuntimeDataVariable_set_Value
                  (pMVar1,(Object *)this_00,(MethodInfo *)0x0);
      }
    }
    return;
  }
code_?:
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

