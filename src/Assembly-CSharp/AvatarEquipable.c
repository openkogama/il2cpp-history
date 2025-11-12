
/* Boolean Equip(AvatarItemType, AvatarEquipableType, Dictionary`2[System.Object,System.Object],
   Int32) */

bool Assembly-CSharp.dll::AvatarEquipable::AvatarEquipable_Equip
               (AvatarEquipable *this,AvatarItemType__Enum type,AvatarEquipableType__Enum equipType,
               Dictionary_2_System_Object_System_Object_ *itemData,int32_t variantID,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<MV::Common::AvatarItemType>__Contains_MV__Common__AvatarItemType_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (equipType == AvatarEquipableType__Enum_Modifier) {
    bVar1 = AvatarEquipable_EquipModifier(this,type,(MethodInfo *)0x0);
    return bVar1;
  }
  if ((this->fields).isAbleToEquipWeapons == 0) {
    pLVar2 = (this->fields).nonWeaponPickups;
    if (pLVar2 == (List_1_MV_Common_AvatarItemType_ *)0x0) {
      FUN_?();
      pcVar3 = (code *)swi(3);
      bVar1 = (*pcVar3)();
      return bVar1;
    }
    if (((pLVar2->fields)._size == 0) ||
       (iVar4 = FUN_?(pLVar2,type,
                              MethodInfo__System__Collections__Generic__List<MV::Common::AvatarItemType>__Contains_MV__Common__AvatarItemType_
                              ->klass->rgctx_data[0x17].rgctxDataDummy), iVar4 == -1)) {
      return 0;
    }
  }
  bVar1 = AvatarEquipable_EquipPickup(this,type,itemData,variantID,(MethodInfo *)0x0);
  return bVar1;
}


/* Boolean EquipModifier(AvatarItemType) */

bool Assembly-CSharp.dll::AvatarEquipable::AvatarEquipable_EquipModifier
               (AvatarEquipable *this,AvatarItemType__Enum type,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MV__Common__AvatarItemType);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_AvatarItemType_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__does_not_exist_in_the_switch_ca);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields).isAbleToCollectPickups != 0) {
    if ((int)type < 8) {
      if (type == AvatarItemType__Enum_Health) {
        pMVar1 = (this->fields).interactableLocal;
        if (pMVar1 != (MVInteractableBase *)0x0) {
          (*(pMVar1->klass->vtable).__unknown_6.methodPtr)
                    (pMVar1,4,0xffffffff,(pMVar1->klass->vtable).__unknown_6.method);
          pMVar1 = (this->fields).interactableLocal;
          if (pMVar1 != (MVInteractableBase *)0x0) {
            (*(pMVar1->klass->vtable).__unknown_2.methodPtr)
                      (pMVar1,_UNK_?,0,(pMVar1->klass->vtable).__unknown_2.method);
            return 1;
          }
        }
code_?:
        FUN_?();
        pcVar2 = (code *)swi(3);
        bVar3 = (*pcVar2)();
        return bVar3;
      }
      if (type == AvatarItemType__Enum_Mutant) {
        pMVar1 = (this->fields).interactableLocal;
        if (pMVar1 != (MVInteractableBase *)0x0) {
          (*(pMVar1->klass->vtable).__unknown_6.methodPtr)
                    (pMVar1,0xb,0xffffffff,(pMVar1->klass->vtable).__unknown_6.method);
          pMVar1 = (this->fields).interactableLocal;
          if (pMVar1 != (MVInteractableBase *)0x0) {
            uVar4 = 2;
            goto code_?;
          }
        }
        goto code_?;
      }
    }
    else {
      if (type == AvatarItemType__Enum_NinjaRun) {
        pMVar1 = (this->fields).interactableLocal;
        if (pMVar1 != (MVInteractableBase *)0x0) {
          (*(pMVar1->klass->vtable).__unknown_6.methodPtr)
                    (pMVar1,2,0xffffffff,(pMVar1->klass->vtable).__unknown_6.method);
          pMVar1 = (this->fields).interactableLocal;
          if (pMVar1 != (MVInteractableBase *)0x0) {
            (*(pMVar1->klass->vtable).__unknown_6.methodPtr)
                      (pMVar1,0xb,0xffffffff,(pMVar1->klass->vtable).__unknown_6.method);
            pMVar1 = (this->fields).interactableLocal;
            if (pMVar1 != (MVInteractableBase *)0x0) {
              uVar4 = 0xb;
              goto code_?;
            }
          }
        }
        goto code_?;
      }
      if (type == AvatarItemType__Enum_MousePack) {
        pMVar1 = (this->fields).interactableLocal;
        if (pMVar1 == (MVInteractableBase *)0x0) goto code_?;
        uVar4 = 0xc;
code_?:
        (*(pMVar1->klass->vtable).__unknown_4.methodPtr)
                  (pMVar1,uVar4,0xffffffff,0,(pMVar1->klass->vtable).__unknown_4.method);
        return 1;
      }
      if (type == AvatarItemType__Enum_GrowthPack) {
        pMVar1 = (this->fields).interactableLocal;
        if (pMVar1 == (MVInteractableBase *)0x0) goto code_?;
        uVar4 = 0xf;
        goto code_?;
      }
    }
    EStack_5.klass = (Enum__Class *)TypeInfo__MV__Common__AvatarItemType;
    EStack_5.monitor = (MonitorData *)0xffffffffffffffff;
    AStack_6 = type;
    pSVar7 = mscorlib.dll::System::Enum::Enum_ToString(&EStack_5,(MethodInfo *)0x0);
    pSVar7 = mscorlib.dll::System::String::String_Concat_5
                       (StringLiteral_AvatarItemType_,pSVar7,
                        StringLiteral__does_not_exist_in_the_switch_ca,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
              ((Object *)pSVar7,(MethodInfo *)0x0);
  }
  return 0;
}


/* Boolean EquipPickup(AvatarItemType, Dictionary`2[System.Object,System.Object], Int32) */

bool Assembly-CSharp.dll::AvatarEquipable::AvatarEquipable_EquipPickup
               (AvatarEquipable *this,AvatarItemType__Enum type,
               Dictionary_2_System_Object_System_Object_ *itemData,int32_t variantID,
               MethodInfo *method)

{
  uVar1 = (ulonglong)(uint)variantID;
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
  pMVar2 = (this->fields).interactableLocal;
  if (pMVar2 != (MVInteractableBase *)0x0) {
    cVar3 = (*(pMVar2->klass->vtable).__unknown_7.methodPtr)
                      (pMVar2,8,(pMVar2->klass->vtable).__unknown_7.method);
    if (cVar3 == '\0') {
      pDVar4 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
                 *)FUN_?(
                                TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                                );
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
      UIElements::UIR::UIRenderDevice+DisableForceGammaMaterial]::
      Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
                (pDVar4,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                );
      AStackX_8 = type;
      pOVar5 = (Object *)FUN_?(lRam_?,&AStackX_8);
      if (pDVar4 !=
          (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
           *)0x0) {
        uVar6 = CONCAT71((int7)(uVar1 >> 8),2);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__TryInsert
                  ((Dictionary_2_System_Object_System_Object_ *)pDVar4,(Object *)StringLiteral_type
                   ,pOVar5,(InsertionBehavior__Enum)uVar6,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                   ->klass->rgctx_data[0x22].method);
        AStackX_8 = variantID;
        pOVar5 = (Object *)FUN_?(lRam_?,&AStackX_8);
        uVar6 = CONCAT71((int7)((ulonglong)uVar6 >> 8),2);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__TryInsert
                  ((Dictionary_2_System_Object_System_Object_ *)pDVar4,
                   (Object *)StringLiteral_variantId,pOVar5,(InsertionBehavior__Enum)uVar6,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                   ->klass->rgctx_data[0x22].method);
        AStackX_8 = AvatarItemType__Enum_Bazooka;
        pOVar5 = (Object *)FUN_?(lRam_?,&AStackX_8);
        uVar6 = CONCAT71((int7)((ulonglong)uVar6 >> 8),2);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__TryInsert
                  ((Dictionary_2_System_Object_System_Object_ *)pDVar4,
                   (Object *)StringLiteral_updateItemState,pOVar5,(InsertionBehavior__Enum)uVar6,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                   ->klass->rgctx_data[0x22].method);
        if (itemData != (Dictionary_2_System_Object_System_Object_ *)0x0) {
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__TryInsert
                    ((Dictionary_2_System_Object_System_Object_ *)pDVar4,
                     (Object *)StringLiteral_itemData,(Object *)itemData,
                     (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar6 >> 8),2),
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                     ->klass->rgctx_data[0x22].method);
        }
        pMVar7 = (this->fields).currentItem;
        if (pMVar7 != (MVRuntimeDataVariable *)0x0) {
          MVRuntimeDataVariable::MVRuntimeDataVariable_set_Value
                    (pMVar7,(Object *)pDVar4,(MethodInfo *)0x0);
          return 1;
        }
      }
    }
    else {
      pMVar7 = (this->fields).currentItem;
      pDVar4 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
                 *)FUN_?(
                                TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                                );
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
      UIElements::UIR::UIRenderDevice+DisableForceGammaMaterial]::
      Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
                (pDVar4,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                );
      AStackX_8 = AvatarItemType__Enum_Hand;
      pOVar5 = (Object *)FUN_?(lRam_?,&AStackX_8);
      if (pDVar4 !=
          (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
           *)0x0) {
        uVar1 = CONCAT71((int7)(uVar1 >> 8),2);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__TryInsert
                  ((Dictionary_2_System_Object_System_Object_ *)pDVar4,(Object *)StringLiteral_type
                   ,pOVar5,(InsertionBehavior__Enum)uVar1,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                   ->klass->rgctx_data[0x22].method);
        lVar8 = lRam_?;
        pOVar5 = (Object *)0x0;
        AStackX_8 = AvatarItemType__Enum_LaserPointer;
        if (*(int *)(lRam_? + 0x28) < 0) {
          if ((*(longlong *)(lRam_? + 0x60) == 0) ||
             ((*(byte *)(lRam_? + 0x135) & 8) == 0)) {
            pOVar5 = (Object *)FUN_?(lRam_?);
            FUN_?(pOVar5 + 1,&AStackX_8,(longlong)*(int *)(lVar8 + 0xf8) + -0x10);
            if (iRam_? != 0) {
              uVar9 = (uint)((ulonglong)(pOVar5 + 1) >> 0xc);
              uVar1 = (ulonglong)(uVar9 & 0x3f);
              puVar10 = (ulonglong *)((ulonglong)((uVar9 & 0x1fffff) >> 6) * 8 + 0xADDR);
              do {
                uVar11 = *puVar10;
                LOCK();
                uVar12 = *puVar10;
                if (uVar11 == uVar12) {
                  *puVar10 = uVar11 | 1L << uVar1;
                }
                UNLOCK();
              } while (uVar11 != uVar12);
            }
          }
        }
        else {
          pOVar5 = (Object *)((ulonglong)uStackX_c << 0x20);
        }
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__TryInsert
                  ((Dictionary_2_System_Object_System_Object_ *)pDVar4,
                   (Object *)StringLiteral_variantId,pOVar5,
                   (InsertionBehavior__Enum)CONCAT71((int7)(uVar1 >> 8),2),
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                   ->klass->rgctx_data[0x22].method);
        if (pMVar7 != (MVRuntimeDataVariable *)0x0) {
          MVRuntimeDataVariable::MVRuntimeDataVariable_set_Value
                    (pMVar7,(Object *)pDVar4,(MethodInfo *)0x0);
          return 0;
        }
      }
    }
  }
  FUN_?();
  pcVar13 = (code *)swi(3);
  bVar14 = (*pcVar13)();
  return bVar14;
}


/* Void EquipSlapGun(Object, EventArgs) */

void Assembly-CSharp.dll::AvatarEquipable::AvatarEquipable_EquipSlapGun
               (AvatarEquipable *this,Object *sender,EventArgs *e,MethodInfo *method)

{
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
    FUN_?(&StringLiteral_type);
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
  auStackX_8[0] = 0x41;
  pOVar2 = (Object *)FUN_?(uRam_?,auStackX_8);
  if ((this_00 !=
       (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
        *)0x0) &&
     (mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__TryInsert
                ((Dictionary_2_System_Object_System_Object_ *)this_00,(Object *)StringLiteral_type,
                 pOVar2,(InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)method >> 8),2),
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                 ->klass->rgctx_data[0x22].method), pMVar1 != (MVRuntimeDataVariable *)0x0)) {
    pOVar3 = ObscuredTypesConverter::ObscuredTypesConverter_CreateObscuredValue
                       ((Object *)this_00,(MethodInfo *)0x0);
    bVar4 = iRam_? != 0;
    pOVar2 = (pMVar1->fields).value;
    (pMVar1->fields).value = pOVar3;
    if (bVar4) {
      uVar5 = (uint)((ulonglong)&(pMVar1->fields).value >> 0xc);
      puVar6 = (ulonglong *)((ulonglong)((uVar5 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar7 = *puVar6;
        LOCK();
        uVar8 = *puVar6;
        if (uVar7 == uVar8) {
          *puVar6 = uVar7 | 1L << (uVar5 & 0x3f);
        }
        UNLOCK();
      } while (uVar7 != uVar8);
    }
    if (pOVar2 != pOVar3) {
      if ((pMVar1->fields).OnChange != (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
        pMVar9 = (pMVar1->fields).OnChange;
        pOVar2 = ObscuredTypesConverter::ObscuredTypesConverter_CreateUnObscuredValue
                           ((pMVar1->fields).value,(MethodInfo *)0x0);
        pcVar10 = (pMVar9->fields)._._.invoke_impl;
        (*pcVar10)((pMVar9->fields)._._.method_code,pOVar2,(pMVar9->fields)._._.method,pcVar10,
                  unaff_RDI);
      }
      if (((pMVar1->fields).writeThrough != 0) &&
         ((pMVar1->fields).OnWriteThrough != (MVRuntimeDataVariable_OnWriteThroughDelegate *)0x0)) {
        pMVar11 = (pMVar1->fields).OnWriteThrough;
        pOVar2 = ObscuredTypesConverter::ObscuredTypesConverter_CreateUnObscuredValue
                           ((pMVar1->fields).value,(MethodInfo *)0x0);
        (*(pMVar11->fields)._._.invoke_impl)
                  ((pMVar11->fields)._._.method_code,pOVar2,(pMVar11->fields)._._.method);
      }
    }
    return;
  }
  FUN_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Boolean GetIsEquipped(AvatarItemType) */

bool Assembly-CSharp.dll::AvatarEquipable::AvatarEquipable_GetIsEquipped
               (AvatarEquipable *this,AvatarItemType__Enum type,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MV__Common__AvatarItemType);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_type);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields).currentItem;
  if (pMVar1 != (MVRuntimeDataVariable *)0x0) {
    this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
               *)ObscuredTypesConverter::ObscuredTypesConverter_CreateUnObscuredValue
                           ((pMVar1->fields).value,(MethodInfo *)0x0);
    if (this_00 !=
        (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_ *)
        0x0) {
      bVar2 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->
              _1).naturalAligment;
      if (((this_00->klass->_1).naturalAligment < bVar2) ||
         ((Dictionary_2_System_Object_System_Object___Class *)
          (this_00->klass->_1).typeHierarchy[(ulonglong)bVar2 - 1] !=
          TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
        FUN_?(this_00);
        pcVar3 = (code *)swi(3);
        bVar4 = (*pcVar3)();
        return bVar4;
      }
      iVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::StyleComplexSelector+PseudoStateData]::
              Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                        (this_00,(Object *)StringLiteral_type,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                         ->klass->rgctx_data[0x21].method);
      if (iVar5 < 0) {
        return 0;
      }
      pOVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
               Object]::Dictionary_2_System_Object_System_Object__get_Item
                         ((Dictionary_2_System_Object_System_Object_ *)this_00,
                          (Object *)StringLiteral_type,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         );
      if (pOVar6 != (Object *)0x0) {
        if ((pOVar6->klass->_0).element_class ==
            (TypeInfo__MV__Common__AvatarItemType->_0).element_class) {
          return *(AvatarItemType__Enum *)&pOVar6[1].klass == type;
        }
        FUN_?(pOVar6,TypeInfo__MV__Common__AvatarItemType);
        pcVar3 = (code *)swi(3);
        bVar4 = (*pcVar3)();
        return bVar4;
      }
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  bVar4 = (*pcVar3)();
  return bVar4;
}


/* Void Holster() */

void Assembly-CSharp.dll::AvatarEquipable::AvatarEquipable_Holster
               (AvatarEquipable *this,MethodInfo *method)

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


/* Void Init(MVInteractableBase, MVRuntimeDataVariable, WorldObjectSkillDataManager) */

void Assembly-CSharp.dll::AvatarEquipable::AvatarEquipable_Init
               (AvatarEquipable *this,MVInteractableBase *interactableLocal,
               MVRuntimeDataVariable *currentItem,WorldObjectSkillDataManager *skillsDataManager,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_UnableToCollectModifierPickups);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_UnableToEquipWeapons);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  iVar1 = iRam_?;
  (this->fields).interactableLocal = interactableLocal;
  if (iVar1 != 0) {
    uVar2 = (uint)((ulonglong)&(this->fields).interactableLocal >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
      iVar1 = iRam_?;
    } while (!bVar6);
  }
  (this->fields).currentItem = currentItem;
  if (iVar1 != 0) {
    uVar2 = (uint)((ulonglong)&(this->fields).currentItem >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar6);
  }
  if (skillsDataManager == (WorldObjectSkillDataManager *)0x0) {
    FUN_?();
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  bVar8 = WorldObjectSkillDataManager::WorldObjectSkillDataManager_HasSkill
                    (skillsDataManager,StringLiteral_UnableToCollectModifierPickups,
                     (MethodInfo *)0x0);
  (this->fields).isAbleToCollectPickups = bVar8 ^ 1;
  bVar8 = WorldObjectSkillDataManager::WorldObjectSkillDataManager_HasSkill
                    (skillsDataManager,StringLiteral_UnableToEquipWeapons,(MethodInfo *)0x0);
  (this->fields).isAbleToEquipWeapons = bVar8 ^ 1;
  return;
}


/* Void Unequip() */

void Assembly-CSharp.dll::AvatarEquipable::AvatarEquipable_Unequip
               (AvatarEquipable *this,MethodInfo *method)

{
  (*(this->klass->vtable).Equip.methodPtr)(this,5,0,0,0,(this->klass->vtable).Equip.method);
  return;
}


/* Void Unholster() */

void Assembly-CSharp.dll::AvatarEquipable::AvatarEquipable_Unholster
               (AvatarEquipable *this,MethodInfo *method)

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


/* AvatarEquipable() */

void Assembly-CSharp.dll::AvatarEquipable::AvatarEquipable__ctor
               (AvatarEquipable *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<MV::Common::AvatarItemType>__Add_MV__Common__AvatarItemType_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<MV::Common::AvatarItemType>__List__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<MV::Common::AvatarItemType>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  (this->fields).isAbleToCollectPickups = 1;
  (this->fields).isAbleToEquipWeapons = 1;
  this_00 = (List_1_System_UInt32Enum_ *)
            FUN_?(TypeInfo__System__Collections__Generic__List<MV::Common::AvatarItemType>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_00,
             MethodInfo__System__Collections__Generic__List<MV::Common::AvatarItemType>__List__);
  pMVar1 = 
  MethodInfo__System__Collections__Generic__List<MV::Common::AvatarItemType>__Add_MV__Common__AvatarItemType_
  ;
  if (this_00 != (List_1_System_UInt32Enum_ *)0x0) {
    piVar2 = &(this_00->fields)._version;
    *piVar2 = *piVar2 + 1;
    pUVar3 = (this_00->fields)._items;
    if (pUVar3 == (UInt32Enum__Enum__Array *)0x0) goto code_?;
    uVar4 = (this_00->fields)._size;
    if (uVar4 < (uint)pUVar3->max_length) {
      (this_00->fields)._size = uVar4 + 1;
      if ((uint)pUVar3->max_length <= uVar4) goto code_?;
      pUVar3->vector[(int)uVar4] = 5;
    }
    else {
      mscorlib.dll::System::Collections::Generic::List`1[System::UInt32Enum]::
      List_1_System_UInt32Enum__AddWithResize(this_00,5,pMVar1->klass->rgctx_data[0xe].method);
    }
    pMVar1 = 
    MethodInfo__System__Collections__Generic__List<MV::Common::AvatarItemType>__Add_MV__Common__AvatarItemType_
    ;
    piVar2 = &(this_00->fields)._version;
    *piVar2 = *piVar2 + 1;
    pUVar3 = (this_00->fields)._items;
    if (pUVar3 == (UInt32Enum__Enum__Array *)0x0) goto code_?;
    uVar4 = (this_00->fields)._size;
    if (uVar4 < (uint)pUVar3->max_length) {
      (this_00->fields)._size = uVar4 + 1;
      if ((uint)pUVar3->max_length <= uVar4) goto code_?;
      pUVar3->vector[(int)uVar4] = 0x3d;
    }
    else {
      mscorlib.dll::System::Collections::Generic::List`1[System::UInt32Enum]::
      List_1_System_UInt32Enum__AddWithResize(this_00,0x3d,pMVar1->klass->rgctx_data[0xe].method);
    }
    pMVar1 = 
    MethodInfo__System__Collections__Generic__List<MV::Common::AvatarItemType>__Add_MV__Common__AvatarItemType_
    ;
    piVar2 = &(this_00->fields)._version;
    *piVar2 = *piVar2 + 1;
    pUVar3 = (this_00->fields)._items;
    if (pUVar3 != (UInt32Enum__Enum__Array *)0x0) {
      uVar4 = (this_00->fields)._size;
      if (uVar4 < (uint)pUVar3->max_length) {
        (this_00->fields)._size = uVar4 + 1;
        if ((uint)pUVar3->max_length <= uVar4) {
code_?:
          FUN_?();
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pUVar3->vector[(int)uVar4] = 0x3b;
      }
      else {
        mscorlib.dll::System::Collections::Generic::List`1[System::UInt32Enum]::
        List_1_System_UInt32Enum__AddWithResize(this_00,0x3b,pMVar1->klass->rgctx_data[0xe].method);
      }
      bVar6 = iRam_? != 0;
      (this->fields).nonWeaponPickups = (List_1_MV_Common_AvatarItemType_ *)this_00;
      if (bVar6) {
        uVar4 = (uint)((ulonglong)&(this->fields).nonWeaponPickups >> 0xc);
        puVar7 = (ulonglong *)((ulonglong)((uVar4 & 0x1fffff) >> 6) * 8 + 0xADDR);
        do {
          uVar8 = *puVar7;
          LOCK();
          uVar9 = *puVar7;
          if (uVar8 == uVar9) {
            *puVar7 = uVar8 | 1L << (uVar4 & 0x3f);
          }
          UNLOCK();
        } while (uVar8 != uVar9);
      }
      bVar6 = cRam_? == '\0';
      (this->fields)._._.findWorldObjectParent = 1;
      if (bVar6) {
        FUN_?(&TypeInfo__UnityEngine__Object);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      return;
    }
  }
code_?:
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

